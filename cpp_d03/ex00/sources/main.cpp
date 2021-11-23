/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:53:30 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/23 17:27:08 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Class.ClapTrap.hpp"

int main()
{
	ClapTrap	claptrap1("Arnold Schwarzenegger");
	ClapTrap	claptrap2("Thierry Henry");

	claptrap1.attack("Thierry Henry");
	claptrap2.takeDamage(0);
	claptrap2.beRepaired(5);
	claptrap2.attack("Arnold Schwarzenegger");
	claptrap1.takeDamage(0);
	return 0;
}
