/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.ScavTrap.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:00 by lwourms           #+#    #+#             */
/*   Updated: 2021/12/01 15:44:32 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Class.ScavTrap.hpp"

/* constructors*/
ScavTrap::ScavTrap(void)
{
	_name = "";
	_hitPoints = 100;
	_energyPoints =	50;
	_attackDammage = 20;
	std::cout << "ScavTrap <" << _name << "> created" << std::endl;
}
ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints =	50;
	_attackDammage = 20;
	std::cout << "ScavTrap <" << _name << "> created" << std::endl;
}
ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;
	std::cout << "ScavTrap <" << _name << "> created" << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap <" << _name << "> is dead" << std::endl;
}

/* member functions */
void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap <" << _name << "> attack <" << target \
	<< ">, causing <"<< _attackDammage << "> points of damage!" << std::endl;
}
void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap <" << _name << "> lost <" << amount \
	<< "> points of energy!" << std::endl;
}
void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "ScavTrap <" << _name << "> healed himself with <" << amount \
	<< "> points of energy!" << std::endl;
}
void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap <" << _name << \
	"> enterred in Gate Keeper Mode" << std::endl;
}

/* operator assignment */
ScavTrap	&ScavTrap::operator=(ScavTrap const &src)
{
	_name = src._name;
	_hitPoints = src._hitPoints;
	_energyPoints =	src._energyPoints;
	_attackDammage = src._attackDammage;
	return *this;
}
