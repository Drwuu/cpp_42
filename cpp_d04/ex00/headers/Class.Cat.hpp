/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Cat.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:02 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/24 13:12:48 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "../headers/Class.Animal.hpp"

class Cat : public Animal
{
	private:
	public:
		/* constructors*/
		Cat();
		Cat(Cat const &src);
		virtual ~Cat();

		/* member functions */
		virtual void	makeSound() const;

		/* operator assignment */
		Cat	&operator=(Cat const &rhs);
};
