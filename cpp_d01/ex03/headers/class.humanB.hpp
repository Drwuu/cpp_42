/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.humanB.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 19:47:56 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/20 15:19:45 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
#ifndef CLASS_HUMANB_HPP
# define CLASS_HUMANB_HPP

# include <iostream>
# include "class.weapon.hpp"

class HumanB
{
	private:
		Weapon		*_weapon;
		std::string	_name;

	public:
		HumanB(std::string name);
		~HumanB();

		void		setWeapon(Weapon &weapon);
		void		attack();
};

#endif
