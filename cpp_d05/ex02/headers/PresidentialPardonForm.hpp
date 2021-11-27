#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		/* attributes */
		int static const	_signGrade;
		int static const	_execGrade;
		std::string			_target;
	public:
		/* constructors */
		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const &src);
		PresidentialPardonForm(std::string target);
		virtual	~PresidentialPardonForm();

		PresidentialPardonForm	&operator=(PresidentialPardonForm const &src);

		/* member functions */
		void	executeForm(Bureaucrat const &executor) const;
};
