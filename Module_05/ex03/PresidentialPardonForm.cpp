/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:57:26 by meserghi          #+#    #+#             */
/*   Updated: 2024/11/22 21:53:45 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 5, 25)
{
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 5, 25)
{
	_target = "Unknown target";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &clone) : AForm("PresidentialPardonForm", 5, 25)
{
	_target = clone._target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &clone)
{
	if (this != &clone)
	{
		_target = clone._target;
		AForm::operator=(clone);
	}
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!getIsSigned())
		throw Bureaucrat::IsNotSignedException();
	else if (executor.getGrade() > getGradeToExecute())
		throw Bureaucrat::GradeTooLowException();
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox.\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}