/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.weapon.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 19:53:56 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/19 20:54:06 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/class.weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	dprintf(2, "Weapon type is %s\n", this->_type.c_str());
}
Weapon::~Weapon()
{
}

std::string	Weapon::getType() const
{
	return this->_type;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
	dprintf(2, "Weapon _type is %s\n", this->_type.c_str());
	dprintf(2, "Weapon type is %s\n", type.c_str());
}
