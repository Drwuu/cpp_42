/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Brain.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:00 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/24 14:55:43 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Class.Brain.hpp"
#include <string>

/* constructors*/
Brain::Brain(void)
{
	std::cout << "Brain created\n";
}
Brain::Brain(Brain const &src)
{
	*this = src;
	std::cout << "Brain copied\n";
}
Brain::~Brain()
{
	std::cout << "Brain destroyed\n";
}

/* member functions */

/* getters and setters */
const std::string	*Brain::getIdeas() const
{
	return _ideas;
}
void	Brain::setIdeas(const std::string ideas[100])
{
	for (int i = 0; i < (int)ideas->length(); i++)
		_ideas[i] = ideas[i];
}

/* operator assignment */
Brain	&Brain::operator=(Brain const &src)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = src._ideas[i];
	return *this;
}
