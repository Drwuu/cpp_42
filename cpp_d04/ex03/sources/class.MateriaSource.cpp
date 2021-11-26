/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.MateriaSource.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:57:05 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/25 14:04:43 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/class.MateriaSource.hpp"
#include <algorithm>
#include <cstddef>

/* Constructors */
MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
	}
}

/* Getters and setters */

/* Member functions */
void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = materia;
			break;
		}
	}
}
AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
		if (_inventory[i] && _inventory[i]->getType() == type)
			return _inventory[i]->clone();
	return NULL;
}


/* Operator assignment */
MateriaSource	&MateriaSource::operator=(MateriaSource const &src)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = src._inventory[i];
	return *this;
}
