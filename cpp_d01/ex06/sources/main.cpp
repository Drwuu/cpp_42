/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 17:54:30 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/20 19:38:01 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/class.karen.hpp"

int	get_case(std::string str)
{
	if (str == "DEBUG")
		return 0;
	if (str == "INFO")
		return 1;
	if (str == "WARNING")
		return 2;
	if (str == "ERROR")
		return 3;
	return -1;
}

int main(int ac, char **av)
{
	if (ac != 2)
		std::cout << "Usage: ./karenFilter cmd\n";
	else
	{
		Karen	karen;

		switch (get_case(av[1]))
		{
			case 0:
				std::cout << "[ DEBUG ]\n";
				karen.complain("debug");
				break;
			case 1:
				std::cout << "[ INFO ]\n";
				karen.complain("info");
				break;
			case 2:
				std::cout << "[ WARNING ]\n";
				karen.complain("warning");
				break;
			case 3:
				std::cout << "[ ERROR ]\n";
				karen.complain("error");
				break;
			default:
				std::cout << "Please use a valid command\n";
		}
	}
	return 0;
}
