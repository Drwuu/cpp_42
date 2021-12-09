/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:01:39 by lwourms           #+#    #+#             */
/*   Updated: 2021/12/09 19:33:02 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers//Mutantstack.hpp"
#include <iterator>
#include <vector>

int	main()
{
	{
		std::cout << "Subject tests" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
		std::cout << std::endl;
	}
	{
		std::cout << "My tests" << std::endl;
		MutantStack<int, std::vector<int> > mutant;
		mutant.push(42);
		mutant.push(43);
		mutant.push(44);

		std::cout << "mutant size = " << mutant.size() << std::endl;
		std::cout << "mutant begin = " << *mutant.begin() << std::endl;
		std::cout << "mutant end = " << *(mutant.end() - 1) << std::endl;
		std::cout << std::endl;

		std::cout << "Copy tests" << std::endl;
		MutantStack<int, std::vector<int> > copy = mutant;
		std::cout << "copy begin = " << (*copy.begin() = 10) << std::endl;
		std::cout << "mutant begin = " << *mutant.begin() << std::endl;
	}
	return 0;
}
