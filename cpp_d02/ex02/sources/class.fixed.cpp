/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.fixed.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:32:45 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/22 20:15:30 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/class.fixed.hpp"

int const Fixed::_fractionalBitsNb = 8;

/* constructors */
Fixed::Fixed(void): _rawBits(0)
{
}
Fixed::Fixed(Fixed const &src)
{
	*this = src;
}
Fixed::Fixed(int const integer)
{
	_rawBits = integer << _fractionalBitsNb;
}
Fixed::Fixed(float const floatPoint)
{
	_rawBits = roundf(floatPoint * (1 << _fractionalBitsNb));
}
Fixed::~Fixed()
{
}

/* getters and setters */
int	Fixed::getRawBits(void) const
{
	return _rawBits;
}
void	Fixed::setRawBits(int const raw)
{
	_rawBits = raw;
}

/* member functions */
int Fixed::toInt(void) const
{
	return (_rawBits >> _fractionalBitsNb);
}
float Fixed::toFloat(void) const
{
	return (float(roundf(_rawBits) / (1 << _fractionalBitsNb)));
}
Fixed	&Fixed::min(Fixed &nb1, Fixed &nb2)
{
	if (nb1 <= nb2)
		return nb1;
	else
		return nb2;
}
const Fixed	&Fixed::min(Fixed const &nb1, Fixed const &nb2)
{
	if (nb1 <= nb2)
		return nb1;
	else
		return nb2;
}
Fixed	&Fixed::max(Fixed &nb1, Fixed &nb2)
{
	if (nb1 >= nb2)
		return nb1;
	else
		return nb2;
}
const Fixed	&Fixed::max(Fixed const &nb1, Fixed const &nb2)
{
	if (nb1 >= nb2)
		return nb1;
	else
		return nb2;
}

/* assignment operators */
Fixed	&Fixed::operator=(Fixed const &rhs)
{
	_rawBits = rhs.getRawBits();
	return *this;
}
Fixed	Fixed::operator+(Fixed const &rhs) const
{
	return toFloat() + rhs.toFloat();
}
Fixed	Fixed::operator-(Fixed const &rhs) const
{
	return toFloat() - rhs.toFloat();
}
Fixed	Fixed::operator*(Fixed const &rhs) const
{
	return toFloat() * rhs.toFloat();
}
Fixed	Fixed::operator/(Fixed const &rhs) const
{
	return toFloat() / rhs.toFloat();
}
Fixed	&Fixed::operator++()
{
	// prefix increment
	_rawBits++;
	return *this;
}
Fixed	Fixed::operator++(int)
{
	// postfix increment
	Fixed old = *this;
	_rawBits++;
	return old;
}
Fixed	&Fixed::operator--()
{
	// prefix increment
	_rawBits--;
	return *this;
}
Fixed	Fixed::operator--(int)
{
	// postfix increment
	Fixed old = *this;
	_rawBits--;
	return old;
}
bool	Fixed::operator>(Fixed const &rhs) const
{
	return toFloat() > rhs.toFloat();
}
bool	Fixed::operator<(Fixed const &rhs) const
{
	return toFloat() < rhs.toFloat();
}
bool	Fixed::operator>=(Fixed const &rhs) const
{
	return toFloat() >= rhs.toFloat();
}
bool	Fixed::operator<=(Fixed const &rhs) const
{
	return toFloat() <= rhs.toFloat();
}
bool	Fixed::operator==(Fixed const &rhs) const
{
	return toFloat() == rhs.toFloat();
}
bool	Fixed::operator!=(Fixed const &rhs) const
{
	return toFloat() != rhs.toFloat();
}

/* non member */
std::ostream	&operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
