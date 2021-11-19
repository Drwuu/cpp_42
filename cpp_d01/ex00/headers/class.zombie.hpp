/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.zombie.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 20:40:07 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/19 16:35:24 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
#ifndef CLASS_ZOMBIE_HPP
# define CLASS_ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string		name;
public:
	Zombie(std::string name);
	~Zombie();

	void	announce();
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);


#endif
