/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:57:02 by meserghi          #+#    #+#             */
/*   Updated: 2024/11/21 22:50:14 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 45, 72)
{
	_target = target;
	_Start = true;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!getIsSigned())
		throw Bureaucrat::IsNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
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