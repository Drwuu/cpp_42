/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.Character.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 20:08:56 by lwourms           #+#    #+#             */
/*   Updated: 2021/12/01 20:34:15 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/class.Character.hpp"

/* Constructors */
Character::Character(): _name("Default")
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}
Character::Character(std::string const &name): _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}
Character::Character(Character const &src)
{
	*this = src;
}
Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (_inventory[i])
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
}

/* Getters and setters */
std::string const &Character::getName() const
{
	return _name;
}
AMateria 	*(&Character::getInventory())[4]
{
	return _inventory;
}

/* Member functions */
void Character::equip(AMateria *m)
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
void Character::unequip(int idx)
{
	_inventory[idx] = NULL;
}
void Character::use(int idx, ICharacter &target)
{
	if (_inventory[idx])
		_inventory[idx]->use(target);
}

/* Operator assignment */
Character	&Character::operator=(Character const &src)
{
	_name = src._name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = src._inventory[i];
	return *this;
}
