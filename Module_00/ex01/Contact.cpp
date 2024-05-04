/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:49:29 by meserghi          #+#    #+#             */
/*   Updated: 2024/05/04 14:44:14 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

void	Contact::Print()
{
	std::cout << "|" << std::setw(10) << _Index << "|";
	if (_FirstName.length() < 10)
		std::cout << std::setw(10) << _FirstName << "|";
	else
		std::cout << std::setw(10) << _FirstName.substr(0, 9) + "." << "|";
	if (_LastName.length() < 10)
		std::cout << std::setw(10) << _LastName << "|";
	else
		std::cout << std::setw(10) << _LastName.substr(0, 9) + "." << "|";
	if (_NickName.length() < 10)
		std::cout << std::setw(10) << _NickName << "|\n";
	else
		std::cout << std::setw(10) << _NickName.substr(0, 9) + "." << "|\n";
}

void	Contact::PrintPerline()
{
	std::cout << "==== Contact (" << _Index << ") ====\n";
	std::cout << " >" << _FirstName << std::endl;
	std::cout << " >" << _LastName << std::endl;
	std::cout << " >" << _NickName << std::endl;
	std::cout << "=====================\n";
}

void	Contact::SetContact(int Index)
{
	std::cout << "Enter Fisrt Name :\n>> ";
	std::cin >> _FirstName;
	std::cout << "Enter Last Name :\n>> ";
	std::cin >> _LastName;
	std::cout << "Enter Nick Name :\n>> ";
	std::cin >> _NickName;
	std::cout << "Enter Phone Number :\n>> ";
	std::cin >> _PhoneNumber;
	std::cout << "Enter Darkes Secret :\n>> ";
	std::cin >> _DarkestSecret;
	_Index = Index;
}