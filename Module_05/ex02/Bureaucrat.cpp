/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:53:53 by meserghi          #+#    #+#             */
/*   Updated: 2024/11/21 21:56:40 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AForm.hpp"

Bureaucrat::Bureaucrat(std::string Name, int Grade) : _Name(Name)
{
	if (Grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (Grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_Grade = Grade;
}

int	Bureaucrat::getGrade() const
{
	return _Grade;
}

std::string	Bureaucrat::getName() const
{
	return _Name;
}

void	Bureaucrat::increment()
{
	if (_Grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_Grade--;
}

void	Bureaucrat::decrement()
{
	if (_Grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_Grade++;
}

const char *Bureaucrat::IsNotSignedException::what() const throw()
{
	return "Is Not Signed";
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade Too High";
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}

Bureaucrat::Bureaucrat() : _Grade(150), _Name("Unknown")
{

}

Bureaucrat::Bureaucrat( const Bureaucrat & clone) : _Grade(clone._Grade), _Name(clone._Name)
{

}

Bureaucrat &Bureaucrat::operator=( const Bureaucrat & clone)
{
	if (this != &clone)
		_Grade = clone._Grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{

}

void	Bureaucrat::signForm(AForm & B)
{
	try
	{
		B.BeSigned(*this);
		std::cout << _Name << " signed " << B.getName() << "\n";
	}
	catch(std::exception & e)
	{
		std::cout << _Name << " couldn't sign " << B.getName() << " becasue " << e.what() << "\n";
	}
}


std::ostream	&operator<<( std::ostream &out, const Bureaucrat &clone)
{
	return (out << clone.getName() << ", Bureaucrat grade " << clone.getGrade() << ".");
}



void	Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << _Name << " executed " << form.getName() << ".\n";
	}
	catch(std::exception & e)
	{
		std::cout << "Exeption : " << e.what() << ".\n";
	}

}
