/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:07:06 by lwourms           #+#    #+#             */
/*   Updated: 2021/12/09 15:36:11 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Span.hpp"
#include <iostream>
#include <vector>

int main()
{
	{
		std::cout << "Subject tests" << std::endl;
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "My tests" << std::endl;
		Span	span(5);
		try {
			std::cout << "Try add span" << std::endl;
			span.addNumber(100000);
			span.addNumber(10);
			span.addNumber(1555);
			span.addNumber(1557);
			span.addNumber(2000);
			span.addNumber(3000);
			span.addNumber(300);
		}
		catch (Span::limitException &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;

		std::cout << "Print span" << std::endl;
		std::cout << span << std::endl;
		std::cout << std::endl;

		std::cout << "Longest span" << std::endl;
		std::cout << span.longestSpan() << std::endl;
		std::cout << std::endl;
		std::cout << "Shortest span" << std::endl;
		std::cout << span.shortestSpan() << std::endl;
		std::cout << std::endl;

		std::cout << "Try add vector to span3" << std::endl;
		Span	span3(10);
		span3.addNumber(200000);
		span3.addNumber(20);
		span3.addNumber(2555);
		span3.addNumber(2557);
		span3.addNumber(3000);
		std::vector<int> vec;
		vec.push_back(42);
		vec.push_back(43);
		vec.push_back(44);
		vec.push_back(45);
		span3.addNumber(vec);
		std::cout << "Print span3" << std::endl;
		std::cout << span3 << std::endl;
		std::cout << std::endl;

		std::cout << "Copy span into span2" << std::endl;
		Span	span2;
		span2 = span;
		std::cout << "span2[0] = " << span2.getVector()[0] << std::endl;
		std::cout << std::endl;

		std::cout << "Modify span2[0]" << std::endl;
		try {
			span2.setVector(10, 42);
		}
		catch(Span::limitException &e) {
			std::cout << e.what() << std::endl;
		}
		try {
			span2.setVector(0, 42);
		}
		catch(Span::limitException &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << "Print span2" << std::endl;
		std::cout << span2 << std::endl;
		std::cout << "span[0] = " << span.getVector()[0] << std::endl;
	}
	return 0;
}
