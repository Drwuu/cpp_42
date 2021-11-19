/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:32:49 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/19 17:47:13 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/class.zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*zombies = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		;
		// zombies[i] = name;
	}
	return (zombies);
}
