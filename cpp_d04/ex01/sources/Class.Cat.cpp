/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Cat.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:00 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/24 13:16:33 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Class.Cat.hpp"
#include <string>

/* constructors*/
Cat::Cat(void): Animal("Cat"), _brain(new Brain())
{
	for (int i = 0; i < 100; i++)
		_brain->_ideas[i] = "Kit Kat";
	std::cout << "Cat created\n";
}
Cat::Cat(Cat const &src): Animal("Cat"), _brain(NULL)
{
	*this = src;
	std::cout << "Cat copied\n";
}
Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destroyed\n";
}

/* member functions */
void	Cat::makeSound() const
{
	std::cout << "Cat meowed\n";
}


/* getters and setters */
const Brain	*Cat::getBrain() const
{
	return _brain;
}

/* operator assignment */
Cat	&Cat::operator=(Cat const &src)
{
	if (_brain)
		delete _brain;
	_brain = new Brain();
	for (int i = 0; i < 100; i++)
		_brain->_ideas[i] = src._brain->_ideas[i];
	_type = src._type;
	return *this;
}
