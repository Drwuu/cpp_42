/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.fixed.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:07:47 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/22 15:50:53 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#ifndef Fixed_H
#define Fixed_H

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int					_rawBits;
		static int const	_fractionalBitsNb;

	public:
		/* constructors */
		Fixed(void);
		Fixed(Fixed const &src);
		Fixed(int const integer);
		Fixed(float const floatPoint);
		~Fixed();

		/* getters and setters */
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		/* member functions */
		int		toInt(void) const;
		float	toFloat(void) const;

		/* assignment operators */
		Fixed	&operator=(Fixed const &rhs);
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif
