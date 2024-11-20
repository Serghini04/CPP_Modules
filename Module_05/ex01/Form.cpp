/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:49:27 by meserghi          #+#    #+#             */
/*   Updated: 2024/11/20 23:21:02 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form(std::string Name, int GradeToExecute, int GradeToSign) : _Name(Name), _GradeToExecute(GradeToExecute), _GradeToSign(GradeToSign)
{
	_IsSigned = false;
}

std::string	Form::getName() const
{
	return _Name;
}

bool	Form::getIsSigned() const
{
	return _IsSigned;
}

int		Form::getGradeToExecute() const
{
	return _GradeToExecute;
}

int		Form::getGradeToSign() const
{
	return _GradeToSign;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade Too High";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}

void	Form::BeSigned(const Bureaucrat & B)
{
	if (B.getGrade() > _GradeToSign)
		throw Form::GradeTooLowException();
	_IsSigned = true;
}

std::ostream	&operator<<( std::ostream &out, const Form &clone)
{
	out << "Name : " <<  clone.getName() << ".\n";
	out << "Is Singed : " <<  clone.getIsSigned() << ".\n";
	out << "Grade Required To Execut : " <<  clone.getGradeToExecute() << ".\n";
	out << "Grade Required To Sign : " <<  clone.getGradeToSign() << ".\n";
	return out;
}

