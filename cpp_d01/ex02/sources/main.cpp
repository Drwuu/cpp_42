/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:39:39 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/19 19:40:49 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN\n";
	std::string	*pstr = &str;
	std::string &rstr = str;

	printf("Adress in memory of str = %p\n", str.c_str());
	printf("Adress in memory of pstr = %p\n", pstr->c_str());
	printf("Adress in memory of rstr = %p\n", rstr.c_str());

	std::cout << "\nValues are:\n";
	std::cout << "str: " << str << "*pstr: " << *pstr << "rstr: " << rstr << std::endl;

	std::cout << "Changing value of str modifying *pstr\n";
	*pstr = "GOODBYE HIS BRAIN\n";
	std::cout << "str: " << str << "*pstr: " << *pstr << "rstr: " << rstr << std::endl;

	std::cout << "Changing value of str modifying rstr\n";
	rstr = "TCHAO HIS BRAIN\n";
	std::cout << "str: " << str << "*pstr: " << *pstr << "rstr: " << rstr;
}
