/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.MateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:57:47 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/25 12:40:52 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "class.AMateria.hpp"
#include "class.IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_inventory[4];
	public:
		MateriaSource();
		virtual ~MateriaSource();

		/* Getters and setters */

		/* Member functions */
		void		learnMateria(AMateria *);
		AMateria	*createMateria(std::string const &type);

		/* Operator assignment */
		MateriaSource	&operator=(MateriaSource const &src);
};
