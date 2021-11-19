/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.zombie.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:32:49 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/19 17:57:23 by lwourms          ###   ########.fr       */
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
