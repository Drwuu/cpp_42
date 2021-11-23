/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.ScavTrap.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:02 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/23 19:20:23 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
 #define ScavTrap_HPP

#include "Class.ClapTrap.hpp"
#include <iostream>

class ScavTrap : virtual public ClapTrap
{
	private:

	public:
		/* constructors*/
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap();

		/* member functions */
		void 		attack(std::string const &target);
		void 		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		guardGate();

		/* operator assignment */
		ScavTrap	&operator=(ScavTrap const &rhs);
};




#endif
