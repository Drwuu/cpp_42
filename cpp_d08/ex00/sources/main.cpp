/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:41:39 by lwourms           #+#    #+#             */
/*   Updated: 2021/12/09 15:46:20 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Easyfind.hpp"
#include <array>

int main()
{
	std::array<int, 5>  arr = {42, 43, 42, 45, 46};
	try
	{
		std::cout << easyfind(arr, 42) << std::endl;
		std::cout << easyfind(arr, 6) << std::endl;
	}
	catch (::NotFound &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
