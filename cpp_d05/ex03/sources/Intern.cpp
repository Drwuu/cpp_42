/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:58:20 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/27 17:56:10 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Intern.hpp"
#include "../headers/AForm.hpp"
#include "../headers/ShrubberyCreationForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/PresidentialPardonForm.hpp"

/* attributes */
int const	Intern::_formNb = 3;

/* constructors */
Intern::Intern()
{
}
Intern::Intern(Intern const &src)
{
	*this = src;
}
Intern::~Intern()
{
}

/* member functions */
AForm	*Intern::createShrubbery(std::string target)
{
	return new ShrubberyCreationForm(target);
}
AForm	*Intern::createRobotomy(std::string target)
{
	return new RobotomyRequestForm(target);
}
AForm	*Intern::createPresidential(std::string target)
{
	return new PresidentialPardonForm(target);
}
AForm	*Intern::makeForm(std::string formName, std::string target) const
{
	std::string forms[3] = {
		"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm",
	};
	AForm *(*fun[3])(std::string str) = {
		&Intern::createShrubbery,
		&Intern::createRobotomy,
		&Intern::createPresidential,
	};
	for (int i = 0; i < _formNb; i++)
	{
		if (forms[i] == formName)
		{
			std::cout << "<Intern> creates " << formName << std::endl;
			return fun[i](target);
		}
	}
	throw Intern::NotRightFormException(formName);
	return NULL;
}

/* assignment operators */
Intern	&Intern::operator=(Intern const &src)
{
	(void)src;
	return *this;
}
