/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.WrongAnimal.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:02 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/24 13:12:48 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class WrongAnimal
{
	protected:
		std::string	_type;
		WrongAnimal(std::string type);

	public:
		/* constructors*/
		WrongAnimal();
		WrongAnimal(WrongAnimal const &src);
		virtual ~WrongAnimal();

		/* member functions */
		void	makeSound() const;

		/* getters and setters */
		std::string	getType() const;

		/* operator assignment */
		WrongAnimal	&operator=(WrongAnimal const &rhs);
};
