/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:53:58 by meserghi          #+#    #+#             */
/*   Updated: 2024/11/21 23:23:45 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat King("King", 1);
		ShrubberyCreationForm Test("Reeee");
		King.signForm(Test);
		King.executeForm(Test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
