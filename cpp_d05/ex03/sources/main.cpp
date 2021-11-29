/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:58:18 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/27 20:58:45 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bureaucrat.hpp"
#include "../headers/Intern.hpp"
#include "../headers/AForm.hpp"
#include "../headers/ShrubberyCreationForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/PresidentialPardonForm.hpp"
#include <cstdlib>

int main()
{
	try {
		Intern	intern;
		AForm	*form;
		form = intern.makeForm("ShrubberyCreationForm", "toutou");
		delete form;
		form = intern.makeForm("RobotomyRequestForm", "popo");
		delete form;
		form = intern.makeForm("PresidentialPardonForm", "coco");
		delete form;
		// form = intern.makeForm("prout", "popo");

		std::cout << std::endl;
		form = intern.makeForm("ShrubberyCreationForm", "toutou");
		Bureaucrat	boss("Lolo", 1);
		boss.signForm(*form);
		boss.executeForm(*form);
		boss.downGrade(150);
		boss.executeForm(*form);
		delete form;
	}
	catch (Intern::NotRightFormException &e) {
		std::cout << e.what() << std::endl;
		exit(EXIT_FAILURE);
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
		exit(EXIT_FAILURE);
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
		exit(EXIT_FAILURE);
	}
	catch (AForm::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
		exit(EXIT_FAILURE);
	}
	catch (AForm::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
		exit(EXIT_FAILURE);
	}
	return 0;
}
