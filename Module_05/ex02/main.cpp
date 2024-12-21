/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:53:58 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/21 11:15:44 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		{
			std::cout << "==== RobotomyRequestForm ====\n";
			Bureaucrat King("King", 1);
			RobotomyRequestForm Test("Reeee");
			King.signForm(Test);
			King.executeForm(Test);
			King.executeForm(Test);
		}
		{
			std::cout << "==== ShrubberyCreationForm ====\n";
			Bureaucrat	User("User", 137);
			ShrubberyCreationForm Form("C888");
			User.signForm(Form);
			User.executeForm(Form);
		}
		{
			std::cout << "==== PresidentialPardonForm ====\n";
			Bureaucrat	User("User", 5);
			PresidentialPardonForm Form("C55");
			User.signForm(Form);
			User.executeForm(Form);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
