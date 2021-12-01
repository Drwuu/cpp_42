/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:51:19 by lwourms           #+#    #+#             */
/*   Updated: 2021/12/01 19:32:37 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Class.Animal.hpp"
#include "../headers/Class.Dog.hpp"
#include "../headers/Class.Cat.hpp"

int main()
{
	const Animal	*animals[4];

	std::cout << "Creating\n";
	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			animals[i] = new Cat();
		else
		 	animals[i] = new Dog();
	}

	std::cout << "\nTesting operator '='\n";
	const Animal	*animal = animals[0];
	std::cout << "Animal copy type = " << animal->getType() << std::endl;
	animal->makeSound();
	const Animal	*animal2 = animals[2];
	std::cout << "Animal2 copy type = " << animal2->getType() << std::endl;
	animal2->makeSound();

	std::cout << "\nTesting copies\n";
	Cat *cat = new Cat();
	Cat *cpy_cat = new Cat(*cat);
	std::cout << "Cat original brain idea = " << cat->getBrain()->_ideas[0] << std::endl;
	delete cat;
	std::cout << "Cpy cat sound = " ; cpy_cat->makeSound();
	std::cout << "Cat copy brain idea = " << cpy_cat->getBrain()->_ideas[0] << std::endl;
	delete cpy_cat;

	std::cout << "\nDeleting\n";
	for (int i = 0; i < 4; i++)
		delete animals[i];
	return 0;
}
