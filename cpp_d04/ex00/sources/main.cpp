/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:51:19 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/24 15:22:12 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Class.Animal.hpp"
#include "../headers/Class.WrongAnimal.hpp"
#include "../headers/Class.Dog.hpp"
#include "../headers/Class.Cat.hpp"
#include "../headers/Class.WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();
	std::cout << "Animal type is " << dog->getType() << std::endl;
	std::cout << "Animal type is " << cat->getType() << std::endl;
	cat->makeSound(); //will output the cat sound!
	dog->makeSound();
	meta->makeSound();

	delete meta;
	delete dog;
	delete cat;

	std::cout << "\nTesting with WrongAnimal\n";
	const WrongAnimal *wrongAnimal = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();

	std::cout << "WrongAnimal type is " << wrongCat->getType() << std::endl;
	std::cout << "WrongAnimal try to make a noise\n";
	wrongAnimal->makeSound();
	std::cout << "WrongCat try to make a noise\n";
	wrongCat->makeSound();
	std::cout << "\nWrongCat ERROR: WrongCat made an inappropriate sound!\n"
	"Error! BIP BIP!\nBIIIIIIP\nTUUUUT!\nCRASHING\nERRROOOOd23ORw22434d23d\n\n";
	delete wrongAnimal;
	delete wrongCat;
	return 0;
}
