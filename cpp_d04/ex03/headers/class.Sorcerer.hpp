/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.Sorcerer.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:57:47 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/26 14:06:47 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "class.ICharacter.hpp"
#include "class.AMateria.hpp"

class Sorcerer: public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];
	public:
		Sorcerer(std::string const &name);
		Sorcerer(Sorcerer const &src);
		virtual ~Sorcerer();

		/* Getters and setters */
		std::string const	&getName() const;
		AMateria			*(&getInventory())[4];

		/* Member functions */
		void		equip(AMateria *m);
		void		unequip(int idx);
		void		use(int idx, ICharacter &target);

		/* Operator assignment */
		Sorcerer	&operator=(Sorcerer const &src);
};
