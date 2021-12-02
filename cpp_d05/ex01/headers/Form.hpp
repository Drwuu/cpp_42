/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form copy.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwourms <lwourms@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:58:23 by lwourms           #+#    #+#             */
/*   Updated: 2021/11/26 18:36:28 by lwourms          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>

std::ostream	&operator<<(std::ostream &o, Form const &src);
class Form
{
	private:
		/* attributes */
		std::string const	_name;
		int			const	_gradeSign;
		int			const	_gradeExec;
		bool				_signed;

	public:
		/* attributes */
		int static const	maxGrade;
		int static const	minGrade;

		/* constructors */
		Form();
		Form(std::string const &name, int signedGrade, int execGrade);
		Form(Form const &src);
		virtual	~Form();

		/* getters and setters */
		std::string	getName() const;
		int const	&getSignedGrade() const;
		int const	&getExecGrade() const;
		bool		&getSigned();

		/* member functions */
		void	beSigned(Bureaucrat &bureaucrat);

		/* assignment operators */
		Form	&operator=(Form const &src);

		/* nested classes */
		class GradeTooHighException: public std::exception {
			private:
				std::string	_msg;
			public:
				GradeTooHighException(Form const &f) {
					std::stringstream s;
					s << "grade is too high for " << f;
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
				GradeTooLowException(Form const &f) {
					std::stringstream s;
					s << "grade is too low for " << f;
					_msg = s.str();
				}
				virtual const char	*what() const throw() {
					return _msg.c_str();
				}
				virtual ~GradeTooLowException() throw() {};
		};
};

/* non member */
