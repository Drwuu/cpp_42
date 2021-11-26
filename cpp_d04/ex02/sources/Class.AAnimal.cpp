/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.AAnimal.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:00 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/24 14:55:43 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Class.AAnimal.hpp"

AAnimal::~AAnimal()
{
}

/* getters and setters */
std::string	AAnimal::getType() const
{
	return _type;
}

/* operator assignment */
AAnimal	&AAnimal::operator=(AAnimal const &src)
{
	_type = src._type;
	return *this;
}
