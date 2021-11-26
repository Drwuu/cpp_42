/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.Ice.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:57:47 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/25 12:40:52 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "class.AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		virtual ~Ice();

		/* Getters and setters */

		/* Member functions */
		AMateria	*clone() const;
		void		use(ICharacter &target);

		/* Operator assignment */
		Ice		&operator=(Ice const &src);
};
