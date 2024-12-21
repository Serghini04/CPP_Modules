/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:53:58 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/21 11:51:15 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

int main()
{
	try
	{
		{
			std::cout << "=== robotomy request ===\n";
			Intern	Student;
			AForm	*FirstForm;

			FirstForm = Student.makeForm("robotomy request", "C05");
			delete FirstForm;
		}
		{
			std::cout << "=== shrubbery creation ===\n";
			Intern	Student;
			AForm	*FirstForm;

			FirstForm = Student.makeForm("shrubbery creation", "C05");
			delete FirstForm;
		}
		{
			std::cout << "=== Test ===\n";
			Intern	Student;
			AForm	*FirstForm;

			FirstForm = Student.makeForm("Test", "C09");
			delete FirstForm;
		}
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << "\n";
	}
	return 0;
}
