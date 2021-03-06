#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		/* attributes */
		int static const	_signGrade;
		int static const	_execGrade;
		std::string			_target;
	public:
		/* constructors */
		RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const &src);
		RobotomyRequestForm(std::string target);
		virtual	~RobotomyRequestForm();

		RobotomyRequestForm	&operator=(RobotomyRequestForm const &src);

		/* member functions */
		void	execute(Bureaucrat const &executor) const;
};
