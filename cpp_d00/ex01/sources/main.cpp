/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 19:00:09 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/19 17:59:01 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/class.phonebook.hpp"

int	main(void)
{
	Phonebook	phonebook;
	std::string	entry;

	phonebook.start_phonebook();
	while (true)
	{
		std::cout << "> ";
		std::getline(std::cin, entry);
		if (entry == "ADD")
			phonebook.add_contact(phonebook.index);
		else if (entry == "SEARCH")
			phonebook.search_contact(phonebook.index - 1);
		else if (entry == "EXIT")
			return (0);
		else
			std::cout << "* Please enter a valid entry: ADD, SEARCH or EXIT" << std::endl;
	}
	return (0);
}
