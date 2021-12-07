/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 20:38:38 by lwourms           #+#    #+#             */
/*   Updated: 2021/12/07 12:28:29 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Iter.hpp"

int	main()
{
	int	numbers[5] = { 42, 43, 44, 45, 46 };
	std::string	strings[3] = { "Coucou", "Maman", "Bobo" };
	std::cout << "print iter numbers until 5:" << std::endl;
	iter(numbers, 5, &print);
	std::cout << "print iter strings until 3:" << std::endl;
	iter(strings, 3, &print);
	std::cout << "print iter numbers until 3:" << std::endl;
	iter(numbers, 3, &print);
	std::cout << "print iter strings until 1:" << std::endl;
	iter(strings, 1, &print);
	return 0;
}
