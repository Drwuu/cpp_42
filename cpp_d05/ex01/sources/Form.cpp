/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:58:20 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/26 17:33:18 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Form.hpp"

/* attributes */
int const	Form::maxGrade = 1;
int const	Form::minGrade = 150;

/* constructors */
Form::Form(): _name("Default"), _grade(minGrade), _signed(false)
{
}
Form::Form(std::string const &name, int const grade): _name(name), _grade(grade), _signed(false)
{
	if (_grade < maxGrade)
		throw GradeTooHighException(*this);
	if (_grade > minGrade)
		throw GradeTooLowException(*this);
}
Form::Form(Form const &src): _name(src._name), _grade(src._grade), _signed(src._signed)
{
	*this = src;
}
Form::~Form()
{
}

/* getters and setters */
std::string	Form::getName() const
{
	return _name;
}
int const	&Form::getGrade() const
{
	return _grade;
}
bool	&Form::getSigned()
{
	return _signed;
}

/* member functions */
void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _grade)
		throw GradeTooLowException(*this);
	else
		_signed = true;
}

/* assignment operators */
Form	&Form::operator=(Form const &src)
{
	_signed = src._signed;
	return *this;
}

/* non member */
std::ostream	&operator<<(std::ostream &o, Form const &src)
{
	o << "<" << src.getName() << "> of grade <" << src.getGrade() << ">";
	return o;
}
