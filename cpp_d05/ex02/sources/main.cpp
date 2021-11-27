/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:58:18 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/27 18:00:22 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bureaucrat.hpp"
#include "../headers/AForm.hpp"
#include "../headers/ShrubberyCreationForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/PresidentialPardonForm.hpp"

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

		AForm *form = new ShrubberyCreationForm("coco");
		boss.executeForm(*form);
		boss.signForm(*form);
		boss.executeForm(*form);
		std::cout << std::endl;
		delete form;

		form = new RobotomyRequestForm("top");
		boss.executeForm(*form);
		boss.signForm(*form);
		boss.executeForm(*form);
		std::cout << std::endl;
		delete form;

		form = new PresidentialPardonForm("zou");
		boss.executeForm(*form);
		boss.signForm(*form);
		boss.executeForm(*form);
		boss.downGrade(50);
		boss.executeForm(*form);
		delete form;
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
		return 0;
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
		return 0;
	}
	catch (AForm::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
		return 0;
	}
	catch (AForm::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
		return 0;
	}
	return 0;
}
