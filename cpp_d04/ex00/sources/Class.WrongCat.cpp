/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.WrongCat.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:00 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/24 13:16:33 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Class.WrongCat.hpp"

/* constructors*/
WrongCat::WrongCat(void): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat created\n";
}
WrongCat::WrongCat(WrongCat const &src)
{
	*this = src;
	std::cout << "WrongCat copied\n";
}
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed\n";
}

/* member functions */
void	WrongCat::makeSound() const
{
	std::cout << "WrongCat meowed\n";
}

/* operator assignment */
WrongCat	&WrongCat::operator=(WrongCat const &src)
{
	_type = src._type;
	return *this;
}
