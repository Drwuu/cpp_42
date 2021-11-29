/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:58:20 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/27 17:56:10 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bureaucrat.hpp"
#include "../headers/AForm.hpp"

/* attributes */
int const	Bureaucrat::maxGrade = 1;
int const	Bureaucrat::minGrade = 150;

/* constructors */
Bureaucrat::Bureaucrat(): _name("Default"), _grade(minGrade)
{
}
Bureaucrat::Bureaucrat(std::string const &name, int grade): _name(name), _grade(grade)
{
	if (_grade < maxGrade)
		throw GradeTooHighException(*this);
	else if (_grade > minGrade)
		throw GradeTooLowException(*this);
}
Bureaucrat::Bureaucrat(Bureaucrat const &src): _name(src._name), _grade(src._grade)
{
	*this = src;
}
Bureaucrat::~Bureaucrat()
{
}

/* getters and setters */
std::string	Bureaucrat::getName() const
{
	return _name;
}
int const	&Bureaucrat::getGrade() const
{
	return _grade;
}

/* member functions */
void	Bureaucrat::upGrade(int const grade)
{
	_grade -= grade;
	if (_grade < maxGrade)
		throw GradeTooHighException(*this);
}

void	Bureaucrat::downGrade(int const grade)
{
	_grade += grade;
	if (_grade > minGrade)
		throw GradeTooLowException(*this);
}
void	Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signs " << form.getName() << " of grade " << form.getGrade() << std::endl;
	}
	catch (AForm::GradeTooHighException &e)
	{
		std::cout << _name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cout << _name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}
void	Bureaucrat::executeForm(AForm const &form) const
{
	try {
		form.executeForm(*this);
	}
	catch (AForm::FormNotSignedException &e) {
		std::cout << e.what() << std::endl;
	}
}

/* assignment operators */
Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &src)
{
	_grade = src._grade;
	return *this;
}

/* non member */
std::ostream	&operator<<(std::ostream &o, Bureaucrat const &src)
{
	o << "<" << src.getName() << "> bureaucrat grade <" << src.getGrade() << ">";
	return o;
}
