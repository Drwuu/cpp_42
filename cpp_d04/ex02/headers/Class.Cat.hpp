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
#ifndef Cat_HPP
 #define Cat_HPP

#include <iostream>
#include "../headers/Class.AAnimal.hpp"
#include "../headers/Class.Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain	*_brain;

	public:
		/* constructors*/
		Cat(void);
		Cat(Cat const &src);
		virtual ~Cat();

		/* member functions */
		void	makeSound() const;

		/* getters and setters */
		const Brain	*getBrain() const;

		/* operator assignment */
		Cat	&operator=(Cat const &rhs);
};




#endif
