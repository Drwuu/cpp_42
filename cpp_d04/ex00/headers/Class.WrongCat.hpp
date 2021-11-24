/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.WrongCat.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:02 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/24 15:12:58 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WrongCat_HPP
 #define WrongCat_HPP

#include <iostream>
#include "../headers/Class.WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
	public:
		/* constructors*/
		WrongCat(void);
		WrongCat(WrongCat const &src);
		virtual ~WrongCat();

		/* member functions */
		void	makeSound() const;

		/* getters and setters */

		/* operator assignment */
		WrongCat	&operator=(WrongCat const &rhs);
};




#endif
