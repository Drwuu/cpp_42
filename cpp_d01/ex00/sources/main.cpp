/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:39:39 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/19 17:51:48 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/class.zombie.hpp"

int main()
{
	randomChump("Thierry Henry");

	Zombie	*zombie = newZombie("Bruce Willis");
	Zombie	*zombie2 = newZombie("Eliot");
	Zombie	*zombie3 = newZombie("Toto");

	zombie->announce();
	zombie2->announce();
	randomChump("Arnold");
	zombie3->announce();


	delete zombie;
	delete zombie2;
	delete zombie3;
	return (0);
}
