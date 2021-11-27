/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:58:23 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/27 17:54:14 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>
#include <sstream>
#include <string>

class			AForm;
class			Bureaucrat;
class			GradeTooHighException;
class			GradeTooLowException;
std::ostream	&operator<<(std::ostream &o, Bureaucrat const &src);
class Bureaucrat
{
	private:
		/* attributes */
		std::string const	_name;
		int					_grade;

	public:
		/* attributes */
		int static const	maxGrade;
		int static const	minGrade;

		/* constructors */
		Bureaucrat();
		Bureaucrat(std::string const &name, int const grade);
		Bureaucrat(Bureaucrat const &src);
		virtual	~Bureaucrat();

		/* getters and setters */
		std::string 		getName() const;
		int const			&getGrade() const;

		/* member functions */
		void	upGrade(int const grade);
		void	downGrade(int const grade);
		void	signForm(AForm &form);
		void	executeForm(AForm const &form) const;

		/* assignment operators */
		Bureaucrat		&operator=(Bureaucrat const &src);

		/* nested classes */
		class GradeTooHighException: public std::exception {
			private:
				std::string	_msg;
			public:
				GradeTooHighException(Bureaucrat const &b) {
					std::stringstream s;
					s << "grade is too high for " << b;
					_msg = s.str();
				}
				virtual const char	*what() const throw() {
					return _msg.c_str();
				}
				virtual	~GradeTooHighException() throw() {}
		};
		class GradeTooLowException: public std::exception {
			private:
				std::string	_msg;
			public:
				GradeTooLowException(Bureaucrat const &b) {
					std::stringstream s;
					s << "grade is too low for " << b;
					_msg = s.str();
				}
				virtual const char	*what() const throw() {
					return _msg.c_str();
				}
				virtual ~GradeTooLowException() throw() {};
		};
};
