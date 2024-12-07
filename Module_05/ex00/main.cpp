/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:53:58 by meserghi          #+#    #+#             */
/*   Updated: 2024/11/30 18:10:31 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"


int main()
{
	try
	{
		Bureaucrat User1;
		Bureaucrat King("King", 0);
		Bureaucrat User2("User2", 150);
		std::cout << User1 << "\n";
		std::cout << User2 << "\n";
		std::cout << King << "\n";
	}
	catch(std::exception &e)
	{
		std::cout << "Exeception : " << e.what() << "\n";
	}
	return 0;
}
