/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Dog.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:00 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/24 13:16:33 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Class.Dog.hpp"

/* constructors*/
Dog::Dog(void): Animal("Dog")
{
	std::cout << "Dog created\n";
}
Dog::Dog(Dog const &src)
{
	*this = src;
	std::cout << "Dog copied\n";
}
Dog::~Dog()
{
	std::cout << "Dog destroyed\n";
}

/* member functions */
void	Dog::makeSound() const
{
	std::cout << "Dog barked\n";
}
/* getters and setters */

/* operator assignment */
Dog	&Dog::operator=(Dog const &src)
{
	_type = src._type;
	return *this;
}
