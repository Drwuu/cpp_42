/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:59:09 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/27 17:10:11 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/RobotomyRequestForm.hpp"
#include <cstdlib>

/* attributes */
int const	RobotomyRequestForm::_signGrade = 72;
int const	RobotomyRequestForm::_execGrade = 45;

/* constructors */
RobotomyRequestForm::RobotomyRequestForm():
AForm("RobotomyRequestForm", false, _signGrade, _execGrade), _target("Default")
{
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src):
AForm(src), _target(src._target)
{
}
RobotomyRequestForm::RobotomyRequestForm(std::string target):
AForm("RobotomyRequestForm", false, _signGrade, _execGrade), _target(target)
{
}
RobotomyRequestForm::~RobotomyRequestForm()
{
}

/* member functions */
void	RobotomyRequestForm::executeForm(Bureaucrat const &executor) const
{
	AForm::executeForm(executor);
	srand(time(NULL));
	int randomNb = rand() % 2;
	std::cout << "Bzzzz bzzzz " << std::endl;
	std::cout << executor.getName() << " executes " << AForm::getName() << std::endl;
	if (randomNb)
		std::cout << executor.getName() << " has robotomized <" << _target << "> " << std::endl;
	else
		std::cout << "<" << _target << "> robotomization has failed" << std::endl;
}

/* assignment operators */
RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	_target = src._target;
	return *this;
}
