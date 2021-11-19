/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.zombie.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 20:43:12 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/19 17:51:33 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/class.zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	announce();
}

Zombie::~Zombie()
{
	std::cout << "Zombie: " << this->name << " died\n";
}

void	Zombie::announce()
{
	std::cout << "<" << this->name << "> BraiiiiiiinnnzzzZ...\n";
}
