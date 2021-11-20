/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.karen.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 17:53:59 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/20 19:10:31 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

typedef	void (*fun)(void);
class Karen
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		Karen(void);
		~Karen(void);

		fun		get_fun() const;
		void	set_fun(fun f);
		void 	complain(std::string level);
};

#endif
