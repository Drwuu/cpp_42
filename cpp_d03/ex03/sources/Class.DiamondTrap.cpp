/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.DiamondTrap.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:00 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/23 19:34:56 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Class.DiamondTrap.hpp"

/* constructors*/
DiamondTrap::DiamondTrap(void)
{
	ClapTrap::setName(_name + "_clap_name");
	FragTrap::setHitPoints(FragTrap::getHitPoints());
	ScavTrap::setEnergyPoints(ScavTrap::getEnergyPoints());
	FragTrap::setAttackDammage(FragTrap::getAttackDammage());
	std::cout << "DiamondTrap <" << getName() << "> created" << std::endl;
}
DiamondTrap::DiamondTrap(std::string name): _name(name)
{
	ClapTrap::setName(_name + "_clap_name");
	FragTrap::setHitPoints(FragTrap::getHitPoints());
	ScavTrap::setEnergyPoints(ScavTrap::getEnergyPoints());
	FragTrap::setAttackDammage(FragTrap::getAttackDammage());
	std::cout << "DiamondTrap <" << getName() << "> created" << std::endl;
}
DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	*this = src;
	std::cout << "DiamondTrap <" << getName() << "> created" << std::endl;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap <" << getName() << "> is dead" << std::endl;
}

/* member functions */
void	DiamondTrap::takeDamage(unsigned int amount)
{
	std::cout << "DiamondTrap <" << getName() << "> lost <" << amount \
	<< "> points of energy!" << std::endl;
}
void	DiamondTrap::beRepaired(unsigned int amount)
{
	std::cout << "DiamondTrap <" << getName() << "> healed himself with <" << amount \
	<< "> points of energy!" << std::endl;
}
void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap I'm <" << getName() << \
	"> from ClapTrap <" << ClapTrap::getName() << ">" << std::endl;
}

/* getters and setters */
std::string	DiamondTrap::getName(void) const
{
	return _name;
}
void	DiamondTrap::setName(const std::string name)
{
	_name = name;
}

/* operator assignment */
DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &src)
{
	setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDammage(src.getAttackDammage());
	return *this;
}
