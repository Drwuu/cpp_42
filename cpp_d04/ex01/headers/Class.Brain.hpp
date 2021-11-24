/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Brain.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:51:02 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/24 13:12:48 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef Brain_HPP
 #define Brain_HPP

#include <iostream>

class Brain
{
	private:

	public:
		std::string	_ideas[100];
		/* constructors*/
		Brain(void);
		Brain(Brain const &src);
		virtual ~Brain();

		/* member functions */

		/* getters and setters */
		const std::string	*getIdeas() const;
		void				setIdeas(const std::string ideas[100]);

		/* operator assignment */
		Brain	&operator=(Brain const &rhs);
};




#endif
