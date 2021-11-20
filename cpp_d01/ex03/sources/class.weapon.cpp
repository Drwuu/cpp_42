/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.weapon.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 19:53:56 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/20 15:12:47 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/class.weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
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
}
