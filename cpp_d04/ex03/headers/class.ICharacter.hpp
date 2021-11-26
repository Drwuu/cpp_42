/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.ICharacter.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:57:47 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/24 19:58:53 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "class.AMateria.hpp"

class AMateria;
class ICharacter
{
	public:
		virtual ~ICharacter() {};
		virtual std::string const &getName() const = 0;
		virtual void equip(AMateria *m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter &target) = 0;
};
