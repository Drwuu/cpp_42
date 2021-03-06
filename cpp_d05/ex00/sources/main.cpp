/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:58:18 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/26 18:34:46 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bureaucrat.hpp"

void	tryUpGrade(Bureaucrat bc, int grade)
{
	std::cout << "begin: " << bc << std::endl;
	std::cout << "try bc.upGrade(" << grade << ");" << std::endl;
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
	std::cout << "try bc.DownGrade(" << grade << ");" << std::endl;
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
}
int main()
{
	Bureaucrat boss("Boss", 10);

	tryUpGrade(boss, 150);
	tryDownGrade(boss, 150);
	tryUpGrade(boss, 50);
	tryDownGrade(boss, 50);

	Bureaucrat	random;
	std::cout << random << std::endl;
	return 0;
}
