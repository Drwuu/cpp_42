/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.humanB.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 20:05:38 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/20 15:21:54 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/class.humanB.hpp"
#include <algorithm>

HumanB::HumanB(std::string name) : _name(name)
{
}
HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}
