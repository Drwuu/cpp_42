/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.WrongAnimal.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:00 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/24 14:55:43 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Class.WrongAnimal.hpp"
#include <string>

/* constructors*/
WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal created\n";
}
WrongAnimal::WrongAnimal(std::string type): _type(type)
{
	std::cout << "WrongAnimal of type " << _type << " created\n";
}
WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	*this = src;
	std::cout << "WrongAnimal copied\n";
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destroyed\n";
}

/* member functions */
void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal made a sound\n";
}

/* getters and setters */
std::string	WrongAnimal::getType() const
{
	return _type;
}

/* operator assignment */
WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &src)
{
	_type = src._type;
	return *this;
}
