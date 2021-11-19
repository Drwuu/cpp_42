/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.humanA.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 19:45:18 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/19 20:26:10 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
#ifndef CLASS_HUMANA_HPP
# define CLASS_HUMANA_HPP

# include <iostream>
# include <string>
# include "class.weapon.hpp"

class HumanA
{
private:
	Weapon		_weapon;
	std::string	_name;
public:
	HumanA(std::string name, Weapon weapon);
	~HumanA();

	Weapon		getWeapon() const;
	void		setWeapon(Weapon weapon);
	std::string	getName() const;
	void		setName(std::string	name);
	int			getAttack() const;
	void		setAttack(int attack);
	void		attack();
};

#endif
