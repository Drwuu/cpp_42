/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:53:30 by lwourms           #+#    #+#             */
/*   Updated: 2021/12/01 16:55:48 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Class.ClapTrap.hpp"
#include "../headers/Class.ScavTrap.hpp"
#include "../headers/Class.FragTrap.hpp"
#include "../headers/Class.DiamondTrap.hpp"

int main()
{
	ClapTrap	claptrap1("Arnold Schwarzenegger");
	ClapTrap	claptrap2("Thierry Henry");

	claptrap1.attack("Thierry Henry");
	claptrap2.takeDamage(0);
	claptrap2.beRepaired(5);
	claptrap2.attack("Arnold Schwarzenegger");
	claptrap1.takeDamage(0);

	std::cout << "\nNew tests\n";
	ScavTrap	scavTrap1("Batman");
	scavTrap1.attack("Thierry Henry");
	claptrap2.takeDamage(20);
	claptrap1.attack("Batman");
	scavTrap1.takeDamage(0);
	scavTrap1.beRepaired(10);
	scavTrap1.guardGate();

	std::cout << "\nNew tests 2\n";
	FragTrap	fragTrap1("Robin");
	fragTrap1.attack("Thierry Henry");
	claptrap2.takeDamage(30);
	claptrap1.attack("Robin");
	fragTrap1.takeDamage(0);
	fragTrap1.beRepaired(10);
	fragTrap1.highFivesGuys();

	std::cout << "\nNew tests 3\n";
	DiamondTrap	diamondTrap1("Joker");
	std::cout << std::endl;
	diamondTrap1.attack("Thierry Henry");
	claptrap2.takeDamage(30);
	claptrap1.attack("Joker");
	diamondTrap1.takeDamage(0);
	diamondTrap1.beRepaired(10);
	diamondTrap1.guardGate();
	diamondTrap1.highFivesGuys();
	diamondTrap1.whoAmI();
	return 0;
}
