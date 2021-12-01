/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:53:30 by lwourms           #+#    #+#             */
/*   Updated: 2021/12/01 14:58:25 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Class.ClapTrap.hpp"
#include "../headers/Class.ScavTrap.hpp"
#include <algorithm>

int main()
{
	ClapTrap	claptrap1("Arnold Schwarzenegger");
	ClapTrap	claptrap2("Thierry Henry");
	std::cout << std::endl;

	claptrap1.attack("Thierry Henry");
	claptrap2.takeDamage(0);
	claptrap2.beRepaired(5);
	claptrap2.attack("Arnold Schwarzenegger");
	claptrap1.takeDamage(0);

	std::cout << "\nNew tests\n";
	ScavTrap	scavTrap1("Batman");
	std::cout << std::endl;

	scavTrap1.attack("Thierry Henry");
	claptrap2.takeDamage(20);
	claptrap1.attack("Batman");
	scavTrap1.takeDamage(0);
	scavTrap1.beRepaired(10);
	scavTrap1.guardGate();
	std::cout << std::endl;
	return 0;
}
