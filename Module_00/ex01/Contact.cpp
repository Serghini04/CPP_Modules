/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:49:29 by meserghi          #+#    #+#             */
/*   Updated: 2024/09/26 10:54:24 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

std::string	Contact::ReadInput(std::string msg)
{
	std::string	res;

	while (res.empty())
	{
		std::cout << msg;
		std::getline(std::cin, res);
		if (std::cin.fail())
			exit(1);
	}
	return (res);
}

void	Contact::Print()
{
	std::cout << "|" << std::setw(10) << _Index << "|";
	if (_FirstName.length() <= 10)
		std::cout << std::setw(10) << _FirstName << "|";
	else
		std::cout << std::setw(10) << _FirstName.substr(0, 9) + "." << "|";
	if (_LastName.length() <= 10)
		std::cout << std::setw(10) << _LastName << "|";
	else
		std::cout << _LastName.substr(0, 9) + "." << "|";
	if (_NickName.length() <= 10)
		std::cout << std::setw(10) << _NickName << "|\n";
	else
		std::cout << std::setw(10) << _NickName.substr(0, 9) + "." << "|\n";
}

void	Contact::PrintPerline()
{
	std::cout << "==== Contact (" << _Index << ") ====\n";
	std::cout << "First Name    > " << _FirstName << std::endl;
	std::cout << "Last Name     > " << _LastName << std::endl;
	std::cout << "Nick Name     > " << _NickName << std::endl;
	std::cout << "Phone Number  > " << _PhoneNumber << std::endl;
	std::cout << "Darkes Secret > " << _DarkestSecret << std::endl;
	std::cout << "=====================\n";
}

void	Contact::SetContact(int Index)
{
	_FirstName = ReadInput("Enter Fisrt Name :\n>> ");
	_LastName = ReadInput("Enter Last Name :\n>> ");
	_NickName = ReadInput("Enter Nick Name :\n>> ");
	_PhoneNumber = ReadInput("Enter Phone Number :\n>> ");
	_DarkestSecret = ReadInput("Enter Darkes Secret :\n>> ");
	_Index = Index;
}
