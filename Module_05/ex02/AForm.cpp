/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:49:27 by meserghi          #+#    #+#             */
/*   Updated: 2024/11/21 21:55:10 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AForm.hpp"

AForm::AForm() : _Name("Unknoun AForm"), _GradeToExecute(150), _GradeToSign(150)
{
	_IsSigned = false;
}

AForm::AForm(const AForm & clone) : _Name("Unknoun AForm"), _GradeToExecute(150), _GradeToSign(150)
{
	_IsSigned = clone._IsSigned;
}

AForm::AForm(std::string Name, int GradeToExecute, int GradeToSign) : _Name(Name), _GradeToExecute(GradeToExecute), _GradeToSign(GradeToSign)
{
	_IsSigned = false;
}

std::string	AForm::getName() const
{
	return _Name;
}

bool	AForm::getIsSigned() const
{
	return _IsSigned;
}

int		AForm::getGradeToExecute() const
{
	return _GradeToExecute;
}

int		AForm::getGradeToSign() const
{
	return _GradeToSign;
}

AForm	&AForm::operator=(const AForm & clone)
{
	if (this != &clone)
		_IsSigned = clone._IsSigned;
	return (*this);
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade Too High";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}

void	AForm::BeSigned(const Bureaucrat & B)
{
	if (B.getGrade() > _GradeToSign)
		throw AForm::GradeTooLowException();
	_IsSigned = true;
}

std::ostream	&operator<<( std::ostream &out, const AForm &clone)
{
	out << "Name : " <<  clone.getName() << ", ";
	out << "Is Signed : " <<  clone.getIsSigned() << ", ";
	out << "Grade Required To Execut : " <<  clone.getGradeToExecute() << ", ";
	out << "Grade Required To Sign : " <<  clone.getGradeToSign() << ".";
	return out;
}

AForm::~AForm()
{

}
