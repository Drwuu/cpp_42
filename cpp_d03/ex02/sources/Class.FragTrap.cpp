/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.FragTrap.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:00 by lwourms           #+#    #+#             */
/*   Updated: 2021/12/01 15:17:28 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Class.FragTrap.hpp"

/* constructors*/
FragTrap::FragTrap(void)
{
	_name = "";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDammage = 30;
	std::cout << "FragTrap <" << _name << "> created" << std::endl;
}
FragTrap::FragTrap(std::string name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDammage = 30;
	std::cout << "FragTrap <" << _name << "> created" << std::endl;
}
FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;
	std::cout << "FragTrap <" << _name << "> created" << std::endl;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap <" << _name << "> is dead" << std::endl;
}

/* member functions */
void	FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap <" << _name << "> attack <" << target \
	<< ">, causing <"<< _attackDammage << "> points of damage!" << std::endl;
}
void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap <" << _name << "> lost <" << amount \
	<< "> points of energy!" << std::endl;
}
void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FragTrap <" << _name << "> healed himself with <" << amount \
	<< "> points of energy!" << std::endl;
}
void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap <" << _name << \
	"> says: Give me a High Five Guys!" << std::endl;
}

/* operator assignment */
FragTrap	&FragTrap::operator=(FragTrap const &src)
{
	_name = src._name;
	_hitPoints = src._hitPoints;
	_energyPoints = src._energyPoints;
	_attackDammage = src._attackDammage;
	return *this;
}
