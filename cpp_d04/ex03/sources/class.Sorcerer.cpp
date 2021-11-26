/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.Sorcerer.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:57:05 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/25 14:04:43 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/class.Sorcerer.hpp"
#include <cstddef>

/* Constructors */
Sorcerer::Sorcerer(std::string const &name): _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}
Sorcerer::~Sorcerer()
{
	for (int i = 0; i < 4; i++)
		if (_inventory[i])
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
}

/* Getters and setters */
std::string const &Sorcerer::getName() const
{
	return _name;
}
AMateria 	*(&Sorcerer::getInventory())[4]
{
	return _inventory;
}

/* Member functions */
void Sorcerer::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			break ;
		}
	}
}
void Sorcerer::unequip(int idx)
{
	_inventory[idx] = NULL;
}
void Sorcerer::use(int idx, ICharacter &target)
{
	if (_inventory[idx])
		_inventory[idx]->use(target);
}

/* Operator assignment */
Sorcerer	&Sorcerer::operator=(Sorcerer const &src)
{
	_name = src._name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = src._inventory[i];
	return *this;
}
