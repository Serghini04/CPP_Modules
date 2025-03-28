/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:49:27 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/21 10:24:48 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"


Form::Form() : _Name("Unknoun Form"), _GradeToExecute(150), _GradeToSign(150)
{
	_IsSigned = false;
}

Form::Form(const Form & clone) : _Name(clone._Name), _GradeToExecute(clone._GradeToExecute), _GradeToSign(clone._GradeToSign)
{
	_IsSigned = clone._IsSigned;
}

Form::Form(std::string Name, int GradeToExecute, int GradeToSign) : _Name(Name), _GradeToExecute(GradeToExecute), _GradeToSign(GradeToSign)
{
	if (GradeToExecute < 1 || GradeToSign < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (GradeToExecute > 150 || GradeToSign >150)
		throw Bureaucrat::GradeTooLowException();
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

Form	&Form::operator=(const Form & clone)
{
	if (this != &clone)
		_IsSigned = clone._IsSigned;
	return (*this);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade Too High";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}

void	Form::beSigned(const Bureaucrat & B)
{
	if (B.getGrade() > _GradeToSign)
		throw Form::GradeTooLowException();
	_IsSigned = true;
}

std::ostream	&operator<<( std::ostream &out, const Form &clone)
{
	out << "Name : " <<  clone.getName() << ", ";
	out << "Is Signed : " <<  clone.getIsSigned() << ", ";
	out << "Grade Required To Execute : " <<  clone.getGradeToExecute() << ", ";
	out << "Grade Required To Sign : " <<  clone.getGradeToSign() << ".";
	return out;
}

Form::~Form()
{

}
