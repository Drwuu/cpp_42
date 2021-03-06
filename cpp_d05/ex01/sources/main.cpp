/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:58:18 by lwourms           #+#    #+#             */
/*   Updated: 2021/12/02 12:43:04 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bureaucrat.hpp"
#include "../headers/Form.hpp"

void	tryUpGrade(Bureaucrat bc, int grade)
{
	std::cout << "begin: " << bc << std::endl;
	std::cout << "try upGrade(" << grade << ");" << std::endl;
	try {
		bc.upGrade(grade);
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "end: " << bc << std::endl;
}
void	tryDownGrade(Bureaucrat bc, int grade)
{
	std::cout << "begin: " << bc << std::endl;
	std::cout << "try downGrade(" << grade << ");" << std::endl;
	try {
		bc.downGrade(grade);
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "end: " << bc << std::endl;
	std::cout << std::endl;
}

int main()
{
	try {
		Bureaucrat	boss("Boss", 10);
		Bureaucrat	random;
		tryUpGrade(boss, 150);
		tryDownGrade(boss, 150);
		tryUpGrade(boss, 50);
		tryDownGrade(boss, 50);
		tryUpGrade(random, 50);
		tryDownGrade(random, 50);
		std::cout << std::endl;

		// Bureaucrat	boss2("Boss2", 151);

		Form	form("complicated form", 10, 20);
		std::cout << form << std::endl;
		std::cout << random << std::endl;
		std::cout << boss << std::endl;
		boss.signForm(form);
		random.signForm(form);
		std::cout << std::endl;

		Form	cpyForm = form;
		std::cout << "copy of " << cpyForm << std::endl;
		if (cpyForm.getSigned())
			std::cout << "cpyForm is signed" << std::endl;
		std::cout << "Default try to sign the copy of " << cpyForm << std::endl;
		random.signForm(cpyForm);

		// Form form2("bad form", 200);
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
		exit(EXIT_FAILURE);
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
		exit(EXIT_FAILURE);
	}
	catch (Form::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
		exit(EXIT_FAILURE);
	}
	catch (Form::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
		exit(EXIT_FAILURE);
	}
	return 0;
}
