/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:49:44 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/21 11:36:27 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern &clone)
{
	(void)clone;
}
Intern &Intern::operator=( const Intern & clone)
{
	(void)clone;
	return *this;
}

AForm	*Intern::makeForm(std::string nameForm, std::string target)
{
	AForm	*Form = NULL;
	int		i = 0;
	std::string	Names[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};

	while (i < 3)
	{
		if (Names[i] == nameForm)
			break;
		i++;
	}
	switch (i)
	{
		case 0 :
			Form = new RobotomyRequestForm(target);
			break;
		case 1 :
			Form = new ShrubberyCreationForm(target);
			break;
		case 2 :
			Form = new PresidentialPardonForm(target);
			break;
		default :
			throw Intern::FormNotFoundException();
	}
	std::cout << "Intern creates " << Form->getName() << " .\n";
	return Form;
}

const char *Intern::FormNotFoundException::what() const throw()
{
	return "Form Not Found";
}

Intern::~Intern()
{

}