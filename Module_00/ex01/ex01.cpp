/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:11:24 by meserghi          #+#    #+#             */
/*   Updated: 2024/05/04 14:52:06 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

int main()
{
	PhoneBook	User;
	bool		Loop;
	std::string	Input;

	Loop = true;
	while (Loop)
	{
		std::cout << "Enter one of three commands. (ADD, SEARCH, EXIT)\n>> ";
		std::cin >> Input;
		if (Input == "ADD")
			User.AddContact();
		else if (Input == "SEARCH")
			User.PrintContacts();
		else if (Input == "EXIT")
			Loop = User.Exit();
	}
	std::cout << "Exiting the phonebook. Goodbye!\n";;
	return (0);
}
