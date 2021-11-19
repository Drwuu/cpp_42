/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.weapon.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 19:50:22 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/19 20:49:44 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
#include <string>
#ifndef CLASS_WEAPON_HPP
# define CLASS_WEAPON_HPP

# include <iostream>

class Weapon
{
private:
	std::string	_type;

public:
	Weapon(std::string type);
	~Weapon();

	std::string	getType() const;
	void		setType(std::string type);
};

#endif
