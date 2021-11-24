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
Dog::Dog(void): Animal("Dog"), _brain(new Brain())
{
	for (int i = 0; i < 100; i++)
		_brain->_ideas[i] = "Hot Dog";
	std::cout << "Dog created\n";
}
Dog::Dog(Dog const &src): Animal("Dog"), _brain(NULL)
{
	*this = src;
	std::cout << "Dog copied\n";
}
Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destroyed\n";
}

/* member functions */
void	Dog::makeSound() const
{
	std::cout << "Dog barked\n";
}
/* getters and setters */
const Brain	*Dog::getBrain() const
{
	return _brain;
}

/* operator assignment */
Dog	&Dog::operator=(Dog const &src)
{
	if (_brain)
		delete _brain;
	_brain = new Brain();
	for (int i = 0; i < 100; i++)
		_brain->_ideas[i] = src._brain->_ideas[i];
	_type = src._type;
	return *this;
}
