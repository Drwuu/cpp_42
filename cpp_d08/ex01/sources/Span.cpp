/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:07:08 by lwourms           #+#    #+#             */
/*   Updated: 2021/12/09 15:59:49 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Span.hpp"

/* constructors */
Span::Span(): _N(0)
{
}
Span::Span(unsigned int N): _N(N)
{
}
Span::Span(Span const &src)
{
	*this = src;
}
Span::~Span()
{
}

/* getters and setters */
std::vector<int> const	&Span::getVector() const
{
	return _vector;
}
void	Span::setVector(size_t index, int nb)
{
	std::vector<int>::iterator it = _vector.begin();
	if (!*(it + index))
		throw limitException();
	_vector.erase(it + index);
	_vector.insert(it + index, nb);
}

/* function members */
void	Span::addNumber(int nb)
{
	if (_vector.size() >= _N)
		throw limitException();
	_vector.insert(_vector.end(), nb);
}
void	Span::addNumber(std::vector<int> vec)
{
	if (_vector.size() >= _N)
		throw limitException();
	_vector.insert(_vector.end(), vec.begin(), vec.end());
}
int	Span::shortestSpan()
{
	std::vector<int> tmp = _vector;
	std::sort(tmp.begin(), tmp.end());
	unsigned int min = UINT_MAX;
	for (std::vector<int>::iterator it = tmp.begin(); it < tmp.end(); it++)
	{
		if (*(it + 1) && min > (unsigned int)(*(it + 1) - *it))
			min = (unsigned int)(*(it + 1) - *it);
	}
	return min;
}
int	Span::longestSpan()
{
	std::__wrap_iter<int *> min = std::min_element(_vector.begin(), _vector.end());
	std::__wrap_iter<int *> max = std::max_element(_vector.begin(), _vector.end());
	return *max - *min;
}

/* operators overload */
Span	&Span::operator=(Span const &src)
{
	_N = src._N;
	_vector.clear();
	_vector.assign(src._vector.begin(), src._vector.end());
	return *this;
}
std::ostream	&operator<<(std::ostream &o, Span &src)
{
	int i = 0;
	std::vector<int> srcVec = src.getVector();
	for (std::vector<int>::iterator it = srcVec.begin(); it < srcVec.end(); it++)
	{
		o << "Vector at " << i << " = " << *it;
		if (it != srcVec.end() - 1)
			o << std::endl;
		i++;
	}
	return o;
}
