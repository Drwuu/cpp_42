/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.Cure.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:57:05 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/25 16:01:51 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/class.Cure.hpp"

/* Constructors */
Cure::Cure(): AMateria("cure")
{
}
Cure::~Cure()
{
}

/* Member functions */
AMateria	*Cure::clone() const
{
	return new Cure();
}
void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << " wounds *\n";
}

/* Operator assignment */
Cure	&Cure::operator=(Cure const &src)
{
	_type = src._type;
	return (*this);
}
