/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:59:09 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/27 17:10:11 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/PresidentialPardonForm.hpp"
#include <cstdlib>

/* attributes */
int const	PresidentialPardonForm::_signGrade = 72;
int const	PresidentialPardonForm::_execGrade = 45;

/* constructors */
PresidentialPardonForm::PresidentialPardonForm():
AForm("PresidentialPardonForm", false, _signGrade, _execGrade), _target("Default")
{
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src):
AForm(src), _target(src._target)
{
}
PresidentialPardonForm::PresidentialPardonForm(std::string target):
AForm("PresidentialPardonForm", false, _signGrade, _execGrade), _target(target)
{
}
PresidentialPardonForm::~PresidentialPardonForm()
{
}

/* member functions */
void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	std::cout << executor.getName() << " executes " << AForm::getName() << std::endl;
	AForm::execute(executor);
	std::cout << "<" << _target << "> has been forgiven by Zafod Beeblebrox" << std::endl;
}

/* assignment operators */
PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	_target = src._target;
	return *this;
}
