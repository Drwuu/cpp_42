/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.AMateria.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:57:05 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/25 13:31:58 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/class.AMateria.hpp"

/* Constructors */
AMateria::AMateria(std::string const &type): _type(type)
{
}
AMateria::AMateria(AMateria const &src)
{
	*this = src;
}
AMateria::~AMateria()
{
}

/* Getters and setters */
std::string const	&AMateria::getType() const
{
	return _type;
}

/* Member functions */
void	AMateria::use(ICharacter& target)
{
	std::cout << "* used generic materia on " << target.getName() << " *\n";
}

/* Operator assignment */
AMateria	&AMateria::operator=(AMateria const &src)
{
	_type = src._type;
	return *this;
}
