/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.AAnimal.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:02 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/24 13:12:48 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AANIMAL_HPP
 #define AANIMAL_HPP

#include <iostream>

class AAnimal
{
	protected:
		std::string	_type;

	public:
		/* destructor */
		virtual ~AAnimal();

		/* member functions */
		void virtual	makeSound() const = 0;

		/* getters and setters */
		std::string	getType() const;

		/* operator assignment */
		AAnimal	&operator=(AAnimal const &rhs);
};




#endif
