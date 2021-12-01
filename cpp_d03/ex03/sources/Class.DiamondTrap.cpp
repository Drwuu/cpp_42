/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.DiamondTrap.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:00 by lwourms           #+#    #+#             */
/*   Updated: 2021/12/01 16:59:05 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Class.DiamondTrap.hpp"

/* constructors*/
DiamondTrap::DiamondTrap(): _name("Default")
{
	ClapTrap::_name = _name + "_clap_name";
	_energyPoints = 50;
	_hitPoints = 100;
	_attackDammage = 30;

	std::cout << "DiamondTrap <" << _name << "> created" << std::endl;
	std::cout << "DiamondTrap <" << _name << "> " << "stats are: \n"
	<< "attack damage:" << _attackDammage << std::endl
	<< "energy points:" << _energyPoints << std::endl
	<< "hit points:" << _hitPoints << std::endl;
}
DiamondTrap::DiamondTrap(std::string name): _name(name)
{
	ClapTrap::_name = _name + "_clap_name";
	_energyPoints = 50;
	_hitPoints = 100;
	_attackDammage = 30;

	std::cout << "DiamondTrap <" << _name << "> created" << std::endl;
	std::cout << "DiamondTrap <" << _name << "> " << "stats are: \n"
	<< "attack damage:" << _attackDammage << std::endl
	<< "energy points:" << _energyPoints << std::endl
	<< "hit points:" << _hitPoints << std::endl;
}
DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	*this = src;
	std::cout << "DiamondTrap <" << _name << "> created" << std::endl;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap <" << _name << "> is dead" << std::endl;
}

/* member functions */
void	DiamondTrap::takeDamage(unsigned int amount)
{
	std::cout << "DiamondTrap <" << _name << "> lost <" << amount \
	<< "> points of energy!" << std::endl;
}
void	DiamondTrap::beRepaired(unsigned int amount)
{
	std::cout << "DiamondTrap <" << _name << "> healed himself with <" << amount \
	<< "> points of energy!" << std::endl;
}
void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap I'm <" << _name << \
	"> from ClapTrap <" << ClapTrap::_name << ">" << std::endl;
}

/* operator assignment */
DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &src)
{
	_name = src._name;
	_attackDammage = src._attackDammage;
	_hitPoints = src._hitPoints;
	_energyPoints = src._energyPoints;
	return *this;
}
