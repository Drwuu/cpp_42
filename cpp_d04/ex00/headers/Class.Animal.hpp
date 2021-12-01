/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Animal.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:02 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/24 13:12:48 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal
{
	protected:
		std::string	_type;
		Animal(std::string type);

	public:
		/* constructors*/
		Animal();
		Animal(Animal const &src);
		virtual ~Animal();

		/* member functions */
		void virtual	makeSound() const;

		/* getters and setters */
		std::string	getType() const;

		/* operator assignment */
		Animal	&operator=(Animal const &rhs);
};
