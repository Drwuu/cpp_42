/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.ClapTrap.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:00 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/23 18:14:17 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Class.ClapTrap.hpp"

/* constructors*/
ClapTrap::ClapTrap(void):
_name(), _hitPoints(10), _energyPoints(10), _attackDammage(0)
{
	std::cout << "ClapTrap <" << getName() << "> created" << std::endl;
}
ClapTrap::ClapTrap(std::string name):
_name(name), _hitPoints(10), _energyPoints(10), _attackDammage(0)
{
	std::cout << "ClapTrap <" << getName() << "> created" << std::endl;
}
ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
	std::cout << "ClapTrap <" << getName() << "> created" << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap <" << getName() << "> is dead" << std::endl;
}

/* member functions */
void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap <" << getName() << "> attack <" << target \
	<< ">, causing <"<< getAttackDammage() << "> points of damage!" << std::endl;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap <" << getName() << "> lost <" << amount \
	<< "> points of energy!" << std::endl;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap <" << getName() << "> healed himself with <" << amount \
	<< "> points of energy!" << std::endl;
}

/* getters and setters */
std::string	ClapTrap::getName(void) const
{
	return _name;
}
void	ClapTrap::setName(const std::string name)
{
	_name = name;
}
int	ClapTrap::getAttackDammage(void) const
{
	return _attackDammage;
}
void	ClapTrap::setAttackDammage(const int attackDammage)
{
	_attackDammage = attackDammage;
}
int	ClapTrap::getHitPoints(void) const
{
	return _hitPoints;
}
void	ClapTrap::setHitPoints(const int hitPoints)
{
	_hitPoints = hitPoints;
}
int	ClapTrap::getEnergyPoints(void) const
{
	return _energyPoints;
}
void	ClapTrap::setEnergyPoints(const int energyPoints)
{
	_energyPoints = energyPoints;
}

/* operator assignment */
ClapTrap	&ClapTrap::operator=(ClapTrap const &src)
{
	setName(src._name);
	setAttackDammage(src._attackDammage);
	setHitPoints(src._hitPoints);
	setEnergyPoints(src._energyPoints);
	return *this;
}
