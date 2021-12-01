/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.ClapTrap.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:02 by lwourms           #+#    #+#             */
/*   Updated: 2021/12/01 15:14:52 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_HPP
 #define ClapTrap_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDammage;

	public:
		/* constructors*/
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap();

		/* member functions */
		void 		attack(std::string const &target);
		void 		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		/* operator assignment */
		ClapTrap	&operator=(ClapTrap const &rhs);
};




#endif
