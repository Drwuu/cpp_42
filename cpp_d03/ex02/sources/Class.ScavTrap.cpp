/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.ScavTrap.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:00 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/23 18:22:51 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Class.ScavTrap.hpp"

/* constructors*/
ScavTrap::ScavTrap(void)
{
	ClapTrap::setName("");
	ClapTrap::setHitPoints(100);
	ClapTrap::setEnergyPoints(50);
	ClapTrap::setAttackDammage(20);
	std::cout << "ScavTrap <" << getName() << "> created" << std::endl;
}
ScavTrap::ScavTrap(std::string name)
{
	ClapTrap::setName(name);
	ClapTrap::setHitPoints(100);
	ClapTrap::setEnergyPoints(50);
	ClapTrap::setAttackDammage(20);
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
	ClapTrap::setName(src.getName());
	ClapTrap::setHitPoints(src.getHitPoints());
	ClapTrap::setEnergyPoints(src.getEnergyPoints());
	ClapTrap::setAttackDammage(src.getAttackDammage());
	return *this;
}
