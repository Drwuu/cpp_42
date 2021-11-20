/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 20:12:23 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/20 15:59:29 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/class.humanA.hpp"
#include "../headers/class.humanB.hpp"

void	my_tests()
{
	std::cout << "My tests\n";
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	std::cout << "\n";
	Weapon hammer = Weapon("big hammer");
	std::cout << "Setting a new weapon(hammer) to bob(humanA) but bob has a club ref as a weapon:\n";
	bob.setWeapon(hammer);
	std::cout << "main | hammer.getType() = " << hammer.getType() << std::endl;
	std::cout << "main | club.getType() = " << club.getType() << std::endl;

	std::cout << "\n";
	std::cout << "It conducts club ref to be redefined with the type of hammer : big hammer\n"
	"It is because bob ref constructor is club : the pointer is on club\n"
	"Equlity operator conduct to get the type of the constructor hammer : big hammer\n"
	"Now :\n"
	"hammer.type = big hammer\n"
	"club.type = big hammer\n"
	"It is finally equal to do club.setType(\"some other type of club\");\n";

	std::cout << "\n";
	std::cout << "Let's bob attacking again:\n";
	bob.attack();

	std::cout << "\n";
	std::cout << "Let's bob change the type of his new weapon hammer:\n";
	std::cout << "main | hammer.setType(\"hammer toy\")\n";
	hammer.setType("hammer toy");
	std::cout << "The type of the new weapon hammer is indeed:\n";
	std::cout << "main | hammer.getType() = " << hammer.getType() << std::endl;
	std::cout << "But the type of club is still:\n";
	std::cout << "main | club.getType() = " << club.getType() << std::endl;
	std::cout << "Bob still attack with club ref, but type has been updated:\n";
	bob.attack();

	std::cout << "\n";
	std::cout << "Conclusion :\n"
	"You can't change a ref (it is like constant),\n"
	"so you can't change the weapon of humanA if weapon is a ref\n";
}

int	main()
{
	{
		std::cout << "Mandatory test 1\n";
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
		std::cout << "\n";
	}
	{
		std::cout << "Mandatory test 2\n";
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
		std::cout << "\n";
	}
	my_tests();
}
