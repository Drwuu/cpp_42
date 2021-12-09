/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:07:13 by lwourms           #+#    #+#             */
/*   Updated: 2021/12/09 14:50:51 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <sys/_types/_size_t.h>
#include <vector>
#include <iterator>
#include <algorithm>
#include <climits>

class Span
{
	private:
		/* attributes */
		unsigned int		_N;
		std::vector<int>	_vector;
	public:
		/* constructors */
		Span();
		Span(unsigned int N);
		Span(Span const &src);
		virtual ~Span();

		/* operators overload */
		Span	&operator=(Span const &src);

		/* getters and setters */
		std::vector<int> const	&getVector() const;
		void					setVector(size_t index, int nb);

		/* function members */
		void	addNumber(int nb);
		void	addNumber(std::vector<int> vec);
		int		shortestSpan();
		int		longestSpan();

		/* exceptions */
		class limitException : public std::exception
		{
			public:
				limitException() {};
				virtual ~limitException() throw() {};
				virtual const char	*what() const throw() { return "Limit exception"; };
		};
		class emptyException : public std::exception
		{
			public:
				emptyException() {};
				virtual ~emptyException() throw() {};
				virtual const char	*what() const throw() { return "Empty exception"; };
		};
};
/* operators overload */
std::ostream	&operator<<(std::ostream &o, Span &src);
