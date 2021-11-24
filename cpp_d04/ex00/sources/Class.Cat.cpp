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

/* constructors*/
Cat::Cat(void): Animal("Cat")
{
	std::cout << "Cat created\n";
}
Cat::Cat(Cat const &src)
{
	*this = src;
	std::cout << "Cat copied\n";
}
Cat::~Cat()
{
	std::cout << "Cat destroyed\n";
}

/* member functions */
void	Cat::makeSound() const
{
	std::cout << "Cat meowed\n";
}


/* getters and setters */

/* operator assignment */
Cat	&Cat::operator=(Cat const &src)
{
	_type = src._type;
	return *this;
}
