/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:59:09 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/29 16:50:06 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ShrubberyCreationForm.hpp"

/* attributes */
int const	ShrubberyCreationForm::_signGrade = 145;
int const	ShrubberyCreationForm::_execGrade = 137;

/* constructors */
ShrubberyCreationForm::ShrubberyCreationForm():
AForm("ShrubberyCreationForm", false, _signGrade, _execGrade), _fileName("_Shrubbery")
{
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src):
AForm(src), _fileName(src._fileName)
{
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
AForm("ShrubberyCreationForm", false, _signGrade, _execGrade), _fileName(target + "_Shrubbery")
{
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

/* member functions */
void	ShrubberyCreationForm::executeForm(Bureaucrat const &executor) const
{
	std::ofstream	out;

	AForm::execute(executor);
	std::cout << executor.getName() << " executes " << AForm::getName() << std::endl;
	out.open(_fileName);
	if (_write.fail())
		std::cerr << "Error occured openning the file " << _fileName << std::endl;
	out << "           ._, |_  .,\n"
	"           `-._\\/  .  \\ /    |/_\n"
	"               \\  _\\, y | \\//\n"
	"         _\\_.___\\\\, \\/ -.\\||\n"
	"           `7-,--.`._||  / / ,\n"
	"           /'     `-. `./ / |/_.'\n"
	"                     |    |//\n"
	"                     |_    /\n"
	"                     |-   |\n"
	"                     |   =|\n"
	"                     |    |\n"
	"--------------------/ ,  . \\--------._      "
	<< std::endl;
	out.close();
}

/* assignment operators */
ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	_fileName = src._fileName;
	return *this;
}
