/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.phonebook.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 16:09:26 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/19 17:58:54 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/class.phonebook.hpp"

Phonebook::Phonebook()
{
	this->index = 0;
}

Phonebook::~Phonebook()
{
	std::cout << "* Exited app" << std::endl;
}

void Phonebook::start_phonebook(void)
{
	std::cout << "* PHONEBOOK" << std::endl;
	std::cout << "* Please use a command: ADD, SEARCH or EXIT" << std::endl;
}

void Phonebook::add_contact(int &index)
{
	if (index == 8)
	{
		std::cout << "* The phonebook is full" << std::endl;
		return ;
	}
	index++;
	contacts[index - 1].set_contact();
	this->start_phonebook();
}

void Phonebook::display_contacts(void)
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "| Index    |First Name| Last Name| Nickname |" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < this->index; i++)
		this->contacts[i].display_contacts_infos(i);
	std::cout << "|-------------------------------------------|" << std::endl;
}

void Phonebook::search_contact(int index)
{
	std::string	entry;
	int			contact_index;
	bool		is_digit;

	if (index < 0)
		std::cout << "* Please add a contact before using SEARCH" << std::endl;
	else
	{
		this->display_contacts();
		std::cout << "* Enter the index of a contact\n";
		while (true)
		{
			is_digit = true;
			std::cout << "> ";
			std::cin >> entry;
			for (int i = 0; i < (int)entry.length(); i++)
			{
				if (!std::isdigit(entry[i]))
				{
					std::cout << "* Invalid index\n";
					std::cin.clear();
					is_digit = false;
					break ;
				}
			}
			if (is_digit)
			{
				contact_index = std::atoi(entry.c_str());
				if (contact_index < 0 || contact_index > index)
				{
					std::cout << "* Invalid index\n";
					std::cin.clear();
				}
				else
				{
					this->contacts[contact_index].display(contact_index);
					break ;
				}
			}
		}
	}
}
