/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.fixed.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:07:47 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/22 15:18:45 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#ifndef Fixed_H
#define Fixed_H

#include <iostream>
#include <string>

class Fixed
{
	private:
		int					_rawBits;
		static int const	_fractionalBitsNb;
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		~Fixed();

		void	setRawBits(int const raw);
		int		getRawBits(void) const;
		Fixed	&operator=(Fixed const &rhs);
};

#endif
