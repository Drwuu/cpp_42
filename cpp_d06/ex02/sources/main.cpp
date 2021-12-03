/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:37:05 by lwourms           #+#    #+#             */
/*   Updated: 2021/12/03 15:54:29 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <__functional_base>
#include <cstddef>
#include <iostream>
#include <cstdlib>
#include <ctime>
class Base
{
	public:
		virtual ~Base() {}
};
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base	*generate()
{
	int	rd = rand() % 3;
	if (rd == 0)
		return new A;
	else if (rd == 1)
		return new B;
	else
		return new C;
}

void	identify(Base *p)
{
	A *a = NULL;
	B *b = NULL;
	C *c = NULL;
	if ((a = dynamic_cast<A *>(p)))
		std::cout << "A" << std::endl;
	else if ((b = dynamic_cast<B *>(p)))
		std::cout << "B" << std::endl;
	else if ((c = dynamic_cast<C *>(p)))
		std::cout << "C" << std::endl;
	if (!a || !b || !c)
		return ;
}
void	identify(Base &p)
{
	Base	*tmp;

	try {
		tmp = &dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch(std::bad_cast &e) {}
	try {
		tmp = &dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast &e) {}
	try {
		tmp = &dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast &e) {}
}

int main()
{
	Base	*base = NULL;
	Base	*base2 = NULL;
	Base	*base3 = NULL;

	srand(time(NULL));
	base = generate();
	base2 = generate();
	base3 = generate();

	std::cout << "Identify by pointer:" << std::endl;
	identify(base);
	identify(base2);
	identify(base3);
	std::cout << std::endl;

	////////////////
	std::cout << "Identify by ref:" << std::endl;
	identify(*base);
	identify(*base2);
	identify(*base3);

	delete base;
	delete base2;
	delete base3;
}
