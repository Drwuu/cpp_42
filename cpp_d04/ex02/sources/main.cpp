/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:51:19 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/25 13:07:17 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Class.AAnimal.hpp"
#include "../headers/Class.Dog.hpp"
#include "../headers/Class.Cat.hpp"

int main()
{
	const AAnimal	*animals[4];

	std::cout << "Creating\n";
	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			animals[i] = new Cat();
		else
		 	animals[i] = new Dog();
	}
	std::cout << "\nTesting operator '='\n";
	const AAnimal	*Aanimal = animals[0];
	std::cout << "AAnimal copy type = " << Aanimal->getType() << std::endl;
	const AAnimal	*Aanimal2 = animals[2];
	std::cout << "AAnimal2 copy type = " << Aanimal2->getType() << std::endl;

	std::cout << "\nTesting copies\n";
	Cat *cat = new Cat();
	Cat cpy_cat(*cat);
	std::cout << "Cat original brain idea = " << cat->getBrain()->_ideas[0] << std::endl;
	delete cat;
	std::cout << "Cpy cat sound = " ; cpy_cat.makeSound();
	std::cout << "Cat copy brain idea = " << cpy_cat.getBrain()->_ideas[0] << std::endl;

	std::cout << "\nDeleting\n";
	for (int i = 0; i < 4; i++)
		delete animals[i];
	return 0;
}
