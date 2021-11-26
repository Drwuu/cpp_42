/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:32:10 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/26 10:21:26 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/class.Ice.hpp"
#include "../headers/class.Cure.hpp"
#include "../headers/class.Sorcerer.hpp"
#include "../headers/class.MateriaSource.hpp"
#include <iostream>

int main()
{
	std::cout << "Their tests:\n";
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Sorcerer("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Sorcerer("bob");
		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}

	std::cout << "\nMy tests:\n";
	{
		ICharacter	*sorcerer = new Sorcerer("Pug");
		std::cout << "sorcerer name = " << sorcerer->getName() << std::endl;
		ICharacter	*sorcerer2 = new Sorcerer("Bad Sorcerer");
		std::cout << std::endl;

		IMateriaSource	*materias = new MateriaSource();
		materias->learnMateria(new Ice());
		AMateria *ice2 =  materias->createMateria("ice");
		ice2->use(*sorcerer);
		AMateria *cure2 =  materias->createMateria("cure");
		if (cure2)
			cure2->use(*sorcerer2);
		materias->learnMateria(new Cure());
		cure2 =  materias->createMateria("cure");
		cure2->use(*sorcerer2);
		std::cout << std::endl;

		sorcerer->equip(ice2);
		sorcerer->equip(cure2);
		sorcerer->use(0, *sorcerer2);
		sorcerer->use(1, *sorcerer2);
		sorcerer->unequip(1);
		sorcerer->use(1, *sorcerer2);

		delete sorcerer;
		delete sorcerer2;
		delete materias;
		delete cure2;
	}
	return 0;
}
