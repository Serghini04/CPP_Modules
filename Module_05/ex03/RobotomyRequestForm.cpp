/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:57:02 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/21 10:49:02 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 45, 72)
{
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 45, 72)
{
	_target = "Unknown target";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &clone) : AForm("RobotomyRequestForm", 45, 72)
{
	_target = clone._target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &clone)
{
	if (this != &clone)
	{
		_target = clone._target;
		AForm::operator=(clone);
	}
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	static bool	_Start = true;

	if (!getIsSigned())
		throw Bureaucrat::IsNotSignedException();
	else if (executor.getGrade() > getGradeToExecute())
		throw Bureaucrat::GradeTooLowException();
	if (_Start)
	{
		std::cout << "Makes some drilling noises.\n";
		std::cout << _target << " has been robotomized successfully 50% of the time.\n";
		_Start = false;
	}
	else
	{
		std::cout << "Robotomy failed\n";
		_Start = true;
	}
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}