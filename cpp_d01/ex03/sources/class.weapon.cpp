/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.weapon.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 19:53:56 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/26 11:01:06 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/class.weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
}
Weapon::~Weapon()
{
}

std::string const	&Weapon::getType() const
{
	return this->_type;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
