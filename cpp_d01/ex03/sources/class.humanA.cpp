/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.humanA.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 20:08:42 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/19 21:01:12 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/class.humanA.hpp"
#include <xlocale/_stdio.h>

HumanA::HumanA(std::string name, Weapon weapon) : _weapon(weapon), _name(name)
{
	dprintf(2, "human A %s weapon is %s\n", this->_name.c_str(), this->_weapon.getType().c_str());
}
HumanA::~HumanA()
{
}

Weapon	HumanA::getWeapon() const
{
	return this->_weapon;
}

void	HumanA::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
	dprintf(2, "human A setWeapon | _weapon is %s weapon is %s\n", this->_weapon.getType().c_str(), weapon.getType().c_str());
}

std::string	HumanA::getName() const
{
	return this->_name;
}

void	HumanA::setName(std::string name)
{
	this->_name = name;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
