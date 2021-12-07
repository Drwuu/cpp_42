/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:42:24 by lwourms           #+#    #+#             */
/*   Updated: 2021/12/07 12:09:35 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

template<typename T>
class Array
{
	private:
		/* Attributes */
		T				*_array;
		unsigned int	_len;
	public:
		/* Constructors */
		Array(): _array(NULL), _len(0) {};
		Array(unsigned int n): _array(new T[n]), _len(n) {};
		Array(Array const &src) {
			*this = src;
		};
		virtual	~Array() { delete [] _array; };

		/* Operators overload */
		Array	&operator=(Array const &src) {
			if (_array)
				delete [] _array;
			_array = new T[src._len];
			for (unsigned int i = 0; i < src._len; i++)
				_array[i] = src._array[i];
			_len = src._len;
			return *this;
		};
		T	&operator[](int index) const {
			if (index >= static_cast<int>(_len) || index < 0)
				throw OutOfRange();
			return _array[index];
		};

		/* Function members */
		int size() const { return (_len); };

		/* Exceptions */
		class OutOfRange : public std::exception
		{
			public:
				OutOfRange() {};
				virtual ~OutOfRange() throw() {};
				virtual const char	*what() const throw() { return "Index out of range"; };
		};
};
