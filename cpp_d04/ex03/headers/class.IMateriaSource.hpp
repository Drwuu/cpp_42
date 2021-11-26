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
class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};
