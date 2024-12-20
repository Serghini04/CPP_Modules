/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:53:58 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/20 17:25:25 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"


int main()
{
	try
	{
		Bureaucrat User1;
		Bureaucrat King("King", 1);
		Bureaucrat User2("User2", 1);

		std::cout << User1 << "\n";
		std::cout << King << "\n";
		std::cout << User2 << "\n";

		for (int i = 1; i < 150; i++)
			User2.decrement();
		std::cout << User2 << "\n";
	}
	catch(std::exception &e)
	{
		std::cout << "Exeception : " << e.what() << "\n";
	}
	return 0;
}
