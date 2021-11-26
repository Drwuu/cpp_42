/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.Ice.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:57:05 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/26 14:13:06 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/class.Ice.hpp"

/* Constructors */
Ice::Ice(): AMateria("ice")
{
}
Ice::Ice(Ice const &src): AMateria(src._type)
{
	*this = src;
}
Ice::~Ice()
{
}

/* Member functions */
AMateria	*Ice::clone() const
{
	return new Ice();
}
void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

/* Operator assignment */
Ice	&Ice::operator=(Ice const &src)
{
	_type = src._type;
	return (*this);
}
