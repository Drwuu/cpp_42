/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.FragTrap.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:00 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/23 18:32:00 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Class.FragTrap.hpp"

/* constructors*/
FragTrap::FragTrap(void)
{
	ClapTrap::setName("");
	ClapTrap::setHitPoints(100);
	ClapTrap::setEnergyPoints(100);
	ClapTrap::setAttackDammage(30);
	std::cout << "FragTrap <" << getName() << "> created" << std::endl;
}
FragTrap::FragTrap(std::string name)
{
	ClapTrap::setName(name);
	ClapTrap::setHitPoints(100);
	ClapTrap::setEnergyPoints(100);
	ClapTrap::setAttackDammage(30);
	std::cout << "FragTrap <" << getName() << "> created" << std::endl;
}
FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;
	std::cout << "FragTrap <" << getName() << "> created" << std::endl;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap <" << getName() << "> is dead" << std::endl;
}

/* member functions */
void	FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap <" << getName() << "> attack <" << target \
	<< ">, causing <"<< getAttackDammage() << "> points of damage!" << std::endl;
}
void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap <" << getName() << "> lost <" << amount \
	<< "> points of energy!" << std::endl;
}
void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FragTrap <" << getName() << "> healed himself with <" << amount \
	<< "> points of energy!" << std::endl;
}
void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap <" << getName() << \
	"> says: Give me a High Five Guys!" << std::endl;
}

/* getters and setters */


/* operator assignment */
FragTrap	&FragTrap::operator=(FragTrap const &src)
{
	ClapTrap::setName(src.getName());
	ClapTrap::setHitPoints(src.getHitPoints());
	ClapTrap::setEnergyPoints(src.getEnergyPoints());
	ClapTrap::setAttackDammage(src.getAttackDammage());
	return *this;
}
