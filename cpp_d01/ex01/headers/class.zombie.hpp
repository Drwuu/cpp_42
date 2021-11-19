/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.zombie.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:33:35 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/19 17:43:09 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_ZOMBIE_HPP
# define CLASS_ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string	name;
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void	announce();
};

Zombie*	zombieHorde(int N, std::string name);

#endif
