/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:38:52 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/19 17:56:41 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/class.zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie	*zombie = new Zombie(name);
	return (zombie);
}
