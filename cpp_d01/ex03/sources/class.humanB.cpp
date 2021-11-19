/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.humanB.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 20:05:38 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/19 21:01:49 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/class.humanB.hpp"
#include <algorithm>

HumanB::HumanB(std::string name) : _weapon(""), _name(name)
{
}
HumanB::~HumanB()
{
}

Weapon	HumanB::getWeapon() const
{
	return this->_weapon;
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
	dprintf(2, "human A setWeapon | _weapon is %s weapon is %s\n", this->_weapon.getType().c_str(), weapon.getType().c_str());
}

std::string	HumanB::getName() const
{
	return this->_name;
}

void	HumanB::setName(std::string name)
{
	this->_name = name;
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
