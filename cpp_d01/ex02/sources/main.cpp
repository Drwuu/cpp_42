/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:39:39 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/26 10:58:40 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN\n";
	std::string	*pstr = &str;
	std::string &rstr = str;

	std::cout << "Adress in memory of str  = " << &str << std::endl;
	std::cout << "Adress in memory of pstr = " << pstr << std::endl;
	std::cout << "Adress in memory of rstr = " << &rstr << std::endl;

	std::cout << "\nValues are:\n";
	std::cout << "str: " << str << "*pstr: " << *pstr << "rstr: " << rstr << std::endl;

	std::cout << "Changing value of str modifying str\n";
	str = "MATANE HIS BRAIN\n";
	std::cout << "str: " << str << "*pstr: " << *pstr << "rstr: " << rstr << std::endl;

	std::cout << "Changing value of str modifying *pstr\n";
	*pstr = "GOODBYE HIS BRAIN\n";
	std::cout << "str: " << str << "*pstr: " << *pstr << "rstr: " << rstr << std::endl;

	std::cout << "Changing value of str modifying rstr\n";
	rstr = "TCHAO HIS BRAIN\n";
	std::cout << "str: " << str << "*pstr: " << *pstr << "rstr: " << rstr;
}
