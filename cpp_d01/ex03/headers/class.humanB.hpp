/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.humanB.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 19:47:56 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/19 20:35:01 by lwourms          ###   ########.fr       */
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
	Weapon		_weapon;
	std::string	_name;
public:
	HumanB(std::string name);
	~HumanB();

	Weapon		getWeapon() const;
	void		setWeapon(Weapon weapon);
	std::string	getName() const;
	void		setName(std::string	name);
	int			getAttack() const;
	void		setAttack(int attack);
	void		attack();
};

#endif
