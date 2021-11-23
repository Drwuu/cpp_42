/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.FragTrap.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:02 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/23 18:31:18 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
 #define FragTrap_HPP

#include "Class.ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
	private:

	public:
		/* constructors*/
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		~FragTrap();

		/* member functions */
		void 		attack(std::string const &target);
		void 		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		highFivesGuys();

		/* getters and setters */

		/* operator assignment */
		FragTrap	&operator=(FragTrap const &rhs);
};

#endif
