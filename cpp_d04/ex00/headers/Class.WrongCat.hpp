/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.WrongCat.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:02 by lwourms           #+#    #+#             */
/*   Updated: 2021/12/01 17:14:18 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "../headers/Class.WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
	public:
		/* constructors*/
		WrongCat();
		WrongCat(WrongCat const &src);
		virtual ~WrongCat();

		/* member functions */
		void	makeSound() const;

		/* operator assignment */
		WrongCat	&operator=(WrongCat const &rhs);
};
