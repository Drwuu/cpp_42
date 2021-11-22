/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.fixed.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:07:47 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/22 20:10:44 by lwourms          ###   ########.fr       */
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
		int				toInt(void) const;
		float			toFloat(void) const;
		static Fixed	&min(Fixed &nb1, Fixed &nb2);
		static Fixed	const &min(Fixed const &nb1, Fixed const &nb2);
		static Fixed	&max(Fixed &nb1, Fixed &nb2);
		static Fixed	const &max(Fixed const &nb1, Fixed const &nb2);

		/* assignment operators */
		Fixed	&operator=(Fixed const &rhs);
		Fixed	operator+(Fixed const &rhs) const;
		Fixed	operator-(Fixed const &rhs) const;
		Fixed	operator*(Fixed const &rhs) const;
		Fixed	operator/(Fixed const &rhs) const;
		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);
		bool	operator>(Fixed const &rhs) const;
		bool	operator<(Fixed const &rhs) const;
		bool	operator>=(Fixed const &rhs) const;
		bool	operator<=(Fixed const &rhs) const;
		bool	operator==(Fixed const &rhs) const;
		bool	operator!=(Fixed const &rhs) const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif
