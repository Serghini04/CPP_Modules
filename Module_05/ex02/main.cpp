/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:53:58 by meserghi          #+#    #+#             */
/*   Updated: 2024/11/22 12:34:20 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

int main()
{
	try
	{
		Bureaucrat King("King", 1);
		RobotomyRequestForm Test("Reeee");
		King.signForm(Test);
		King.executeForm(Test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
