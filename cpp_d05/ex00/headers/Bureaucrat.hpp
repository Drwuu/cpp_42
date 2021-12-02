/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:58:23 by lwourms           #+#    #+#             */
/*   Updated: 2021/12/02 12:05:21 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>

class Bureaucrat
{
	private:
		/* attributes */
		std::string const	_name;
		int					_grade;

	public:
		/* attributes */
		unsigned int static const	maxGrade;
		unsigned int static const	minGrade;

		/* constructors */
		Bureaucrat();
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(Bureaucrat const &src);
		virtual	~Bureaucrat();

		/* getters and setters */
		std::string const	getName() const;
		int const			&getGrade() const;

		/* member functions */
		void	upGrade(int const grade);
		void	downGrade(int const grade);

		/* assignment operators */
		Bureaucrat		&operator=(Bureaucrat const &src);

		/* nested classes */
		class GradeTooHighException: public std::exception {
			public:
				virtual const char	*what() const throw() {
					return "Grade is too high for a bureaucrat";
				}
		};
		class GradeTooLowException: public std::exception {
			public:
				virtual const char	*what() const throw() {
					return "Grade is too low for a bureaucrat";
				}
		};
};

/* non member */
std::ostream	&operator<<(std::ostream &o, Bureaucrat const &src);
