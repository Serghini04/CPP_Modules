/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:53:53 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/21 10:29:51 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

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

void	Bureaucrat::signForm(Form & B)
{
	try
	{
		B.beSigned(*this);
		std::cout << _Name << " signed " << B.getName() << "\n";
	}
	catch(std::exception & e)
	{
		std::cout << _Name << " couldn't sign " << B.getName() << " because " << e.what() << "\n";
	}
}


std::ostream	&operator<<( std::ostream &out, const Bureaucrat &clone)
{
	return (out << clone.getName() << ", Bureaucrat grade " << clone.getGrade() << ".");
}
