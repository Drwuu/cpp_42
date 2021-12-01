/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Animal.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:00 by lwourms           #+#    #+#             */
/*   Updated: 2021/12/01 17:23:16 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Class.Animal.hpp"
#include <string>

/* constructors*/
Animal::Animal(void)
{
	std::cout << "Animal created" << std::endl;
}
Animal::Animal(std::string type): _type(type)
{
	std::cout << "Animal of type " << _type << " created" << std::endl;
}
Animal::Animal(Animal const &src)
{
	*this = src;
	std::cout << "Animal copied" << std::endl;
}
Animal::~Animal()
{
	std::cout << "Animal destroyed" << std::endl;
}

/* member functions */
void	Animal::makeSound() const
{
	std::cout << "Animal made a sound" << std::endl;
}

/* getters and setters */
std::string	Animal::getType() const
{
	return _type;
}

/* operator assignment */
Animal	&Animal::operator=(Animal const &src)
{
	_type = src._type;
	return *this;
}
