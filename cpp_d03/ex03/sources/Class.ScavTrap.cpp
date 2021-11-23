/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.ScavTrap.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:00 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/23 18:42:03 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Class.ScavTrap.hpp"

/* constructors*/
ScavTrap::ScavTrap(void)
{
	setName("");
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDammage(20);
	std::cout << "ScavTrap <" << getName() << "> created" << std::endl;
}
ScavTrap::ScavTrap(std::string name)
{
	setName(name);
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDammage(20);
	std::cout << "ScavTrap <" << getName() << "> created" << std::endl;
}
ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;
	std::cout << "ScavTrap <" << getName() << "> created" << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap <" << getName() << "> is dead" << std::endl;
}

/* member functions */
void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap <" << getName() << "> attack <" << target \
	<< ">, causing <"<< getAttackDammage() << "> points of damage!" << std::endl;
}
void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap <" << getName() << "> lost <" << amount \
	<< "> points of energy!" << std::endl;
}
void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "ScavTrap <" << getName() << "> healed himself with <" << amount \
	<< "> points of energy!" << std::endl;
}
void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap <" << getName() << \
	"> enterred in Gate Keeper Mode" << std::endl;
}

/* getters and setters */


/* operator assignment */
ScavTrap	&ScavTrap::operator=(ScavTrap const &src)
{
	setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDammage(src.getAttackDammage());
	return *this;
}
