#pragma once
#include <stdexcept>
#include <iostream>
#include <algorithm>


class NotFound : public std::exception
{
	public:
		NotFound(){};
		virtual ~NotFound() throw(){};
		virtual const char	*what() const throw() { return "Element not found"; };
};
template<typename T>
int	&easyfind(T &container, int toFind)
{
	typename T::iterator	result;

	result = std::find(container.begin(), container.end(), toFind);
	if (result != container.end())
		return *result;
	else
		throw NotFound();
}
