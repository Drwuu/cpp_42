/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:58:20 by lwourms           #+#    #+#             */
/*   Updated: 2021/12/02 12:13:01 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bureaucrat.hpp"

/* attributes */
unsigned int const	Bureaucrat::maxGrade = 1;
unsigned int const	Bureaucrat::minGrade = 150;

/* constructors */
Bureaucrat::Bureaucrat(): _name("Default"), _grade(minGrade)
{
}
Bureaucrat::Bureaucrat(std::string const &name, int grade): _name(name), _grade(grade)
{
	if (_grade < (int)maxGrade)
		throw GradeTooHighException();
	if (_grade > (int)minGrade)
		throw GradeTooLowException();
}
Bureaucrat::Bureaucrat(Bureaucrat const &src): _name(src._name), _grade(src._grade)
{
	*this = src;
}
Bureaucrat::~Bureaucrat()
{
}

/* getters and setters */
std::string const	Bureaucrat::getName() const
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
	if (_grade < (int)maxGrade)
		throw GradeTooHighException();
}

void	Bureaucrat::downGrade(int const grade)
{
	_grade += grade;
	if (_grade > (int)minGrade)
		throw GradeTooLowException();
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
	o << "<" << src.getName() << ">, bureaucrat grade <" << src.getGrade() << ">";
	return o;
}
