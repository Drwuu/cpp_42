/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.zombie.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:33:35 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/19 19:10:47 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CLASS_ZOMBIE_HPP
# define CLASS_ZOMBIE_HPP

# include <iostream>
#include <string>

class Zombie
{
private:
	std::string	_name;
public:
	Zombie();
	~Zombie();

	std::string	getName() const;
	void		setName(std::string name);

	void	announce();
};

Zombie*	zombieHorde(int N, std::string name);

#endif
