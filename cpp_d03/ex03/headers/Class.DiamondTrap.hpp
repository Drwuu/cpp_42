/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.DiamondTrap.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:02 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/23 18:31:18 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DiamondTrap_HPP
 #define DiamondTrap_HPP

#include "Class.FragTrap.hpp"
#include "Class.ScavTrap.hpp"
#include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	_name;

	public:
		/* constructors*/
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &src);
		~DiamondTrap();

		/* member functions */
		void 		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		whoAmI();

		/* getters and setters */
		std::string	getName(void) const;
		void		setName(const std::string name);

		/* operator assignment */
		DiamondTrap	&operator=(DiamondTrap const &rhs);
};

#endif
