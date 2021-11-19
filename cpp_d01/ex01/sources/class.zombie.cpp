/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.zombie.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:32:49 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/19 19:11:52 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/class.zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << "Zombie: " << this->_name << " died\n";
}

std::string	Zombie::getName() const
{
	return this->_name;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::announce()
{
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ...\n";
}
