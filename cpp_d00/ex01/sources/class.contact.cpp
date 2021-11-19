/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.contact.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 19:02:01 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/19 17:58:57 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/class.contact.hpp"

std::string	Contact::fields_name[5] = {
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number:",
	"Darkest Secret"
};

enum Fields {
	FirstName,
	LastName,
	Nickname,
	PhoneNumber,
	DarkestSecret
};

Contact::Contact()
{
	for (int i = 0; i < 5; i++)
		this->datas[i] = std::string();
}

Contact::~Contact()
{
}

void	Contact::set_contact()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "* Enter " << Contact::fields_name[i] << ":\n> ";
		std::getline(std::cin, this->datas[i]);
		if (!is_valid_datas(i))
		{
			i--;
			continue ;
		}
	}
	std::cout << "* Contact added !" << std::endl;
}

bool	Contact::is_valid_datas(int index)
{
	if (this->datas[index] == "")
	{
		std::cout << "* Please don't use empty entries" << std::endl;
		return false;
	}
	switch (index)
	{
		case PhoneNumber:
			return (Contact::is_valid_phoneNumber(this->datas[index]));
		default:
			break;
	}
	return (true);
}

bool Contact::is_valid_phoneNumber(std::string data)
{
	if ((int)data.length() != 10)
	{
		std::cout << "* Format is: xxxxxxxx" << std::endl;
		return false;
	}
	for (int j = 0; j < (int)data.length(); j++)
	{
		if (!std::isdigit(data[j]))
		{
			std::cout << "* Format is : xxxxxxxx" << std::endl;
			return false;
		}
	}
	return (true);
}

void	Contact::display_contacts_infos(int index)
{
	std::cout << "|" << std::setw(10) << index;
	for (int i = FirstName; i <= Nickname; i++)
	{
		std::cout << "|";
		if (this->datas[i].length() > 10)
			std::cout << this->datas[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->datas[i];
	}
	std::cout << "|" << std::endl;
}

void Contact::display(int index)
{
	std::cout << "* Contact [" << index << "]" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << Contact::fields_name[i] << ": ";
		std::cout << this->datas[i] << std::endl;
	}
}
