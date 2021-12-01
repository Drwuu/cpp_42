/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.ClapTrap.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:00 by lwourms           #+#    #+#             */
/*   Updated: 2021/12/01 15:28:00 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Class.ClapTrap.hpp"

/* constructors*/
ClapTrap::ClapTrap(void):
_name(""), _hitPoints(10), _energyPoints(10), _attackDammage(0)
{
	std::cout << "ClapTrap <" << _name << "> created" << std::endl;
}
ClapTrap::ClapTrap(std::string name):
_name(name), _hitPoints(10), _energyPoints(10), _attackDammage(0)
{
	std::cout << "ClapTrap <" << _name << "> created" << std::endl;
}
ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
	std::cout << "ClapTrap <" << _name << "> created" << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap <" << _name << "> is dead" << std::endl;
}

/* member functions */
void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap <" << _name << "> attack <" << target \
	<< ">, causing <"<< _attackDammage << "> points of damage!" << std::endl;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap <" << _name << "> lost <" << amount \
	<< "> points of energy!" << std::endl;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap <" << _name << "> healed himself with <" << amount \
	<< "> points of energy!" << std::endl;
}

/* operator assignment */
ClapTrap	&ClapTrap::operator=(ClapTrap const &src)
{
	_name = src._name;
	_attackDammage = src._attackDammage;
	_hitPoints = src._hitPoints;
	_energyPoints = src._energyPoints;
	return *this;
}
