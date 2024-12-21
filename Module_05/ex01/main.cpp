/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:53:58 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/20 17:58:21 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

int main()
{
	try
	{
		{
			Bureaucrat	King("King", 1);
			Form	F("King's Document", 1, 1);

			std::cout << ">> " <<  King << "\n";
			std::cout << ">> " <<  F << "\n";

			King.signForm(F);
			std::cout << ">> " <<  F << "\n";
		}
		std::cout << "==================================\n";
		{
			Bureaucrat	King("King", 2);
			Form	F("King's Document", 1, 1);

			std::cout << ">> " <<  King << "\n";
			std::cout << ">> " <<  F << "\n";

			King.signForm(F);
			std::cout << ">> " <<  F << "\n";
		}
	}
	catch(std::exception & e)
	{
		std::cout << "Exception : " << e.what() << "\n";
	}
	return 0;
}
