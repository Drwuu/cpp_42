/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.ClapTrap.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:02 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/23 18:06:39 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_HPP
 #define ClapTrap_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDammage;

	public:
		/* constructors*/
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap();

		/* member functions */
		void 		attack(std::string const &target);
		void 		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		/* getters and setters */
		std::string	getName(void) const;
		void		setName(const std::string name);
		int			getAttackDammage(void) const;
		void		setAttackDammage(const int attackDammage);
		int			getHitPoints(void) const;
		void		setHitPoints(const int hitPoints);
		int			getEnergyPoints(void) const;
		void		setEnergyPoints(const int energyPoints);

		/* operator assignment */
		ClapTrap	&operator=(ClapTrap const &rhs);
};




#endif
