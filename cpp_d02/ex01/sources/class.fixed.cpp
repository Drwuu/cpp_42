/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.fixed.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:32:45 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/22 19:04:48 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/class.fixed.hpp"

int const Fixed::_fractionalBitsNb = 8;

/* constructors */
Fixed::Fixed(void): _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}
Fixed::Fixed(int const integer)
{
	std::cout << "Int constructor called" << std::endl;
	_rawBits = integer << _fractionalBitsNb;
	// Equal to 0 > pushing 0bit, 8 times in an interger of 8bits size > 0000 0000
}
Fixed::Fixed(float const floatPoint)
{
	std::cout << "Float constructor called" << std::endl;
	_rawBits = roundf(floatPoint * (1 << _fractionalBitsNb));
	// size of a byte: 1111 1111, then: _rawbits is the rounded bit
	// representation of the floatPoint > fixed point representation
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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
	// restitute bit representation with right shifting >
	// if rawbits = 1111 0100 0010 0100 0000 become >
	// 0000 0000 1111 0100
	return (_rawBits >> _fractionalBitsNb);
}
float Fixed::toFloat(void) const
{
	return (float(roundf(_rawBits) / (1 << _fractionalBitsNb)));
}

/* assignment operators */
Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	_rawBits = rhs.getRawBits();
	return *this;
}


/* non member */
std::ostream	&operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
