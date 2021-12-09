/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:30:54 by lwourms           #+#    #+#             */
/*   Updated: 2021/12/09 19:20:50 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <deque>
#include <iostream>
#include <stack>

template <typename T, class container = std::deque<T> >
class MutantStack: public std::stack<T, container>
{
	public:
		MutantStack() {};
		MutantStack(MutantStack const &src) {
			*this = src;
		};
		virtual ~MutantStack() {};
		MutantStack	&operator=(MutantStack const &src) {
			this->c = src.c;
			return *this;
		}

		typedef typename MutantStack::container_type::iterator iterator;
		iterator	begin() {
			return	this->c.begin();
		}
		iterator	end() {
			return	this->c.end();
		}
};
