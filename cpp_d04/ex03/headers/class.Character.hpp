/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.Character.hpp                                 :+:      :+:    :+:   */
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

class Character: public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];
	public:
		Character();
		Character(std::string const &name);
		Character(Character const &src);
		virtual ~Character();

		/* Getters and setters */
		std::string const	&getName() const;
		AMateria			*(&getInventory())[4];

		/* Member functions */
		void		equip(AMateria *m);
		void		unequip(int idx);
		void		use(int idx, ICharacter &target);

		/* Operator assignment */
		Character	&operator=(Character const &src);
};
