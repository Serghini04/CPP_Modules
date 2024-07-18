/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:47:36 by meserghi          #+#    #+#             */
/*   Updated: 2024/07/18 22:19:49 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

PhoneBook::PhoneBook()
{
	_i = 0;
	_Size = 0;
}
void	PhoneBook::AddContact()
{
	_Contacts[_i].SetContact(_i);
	_i++;
	if (_i == 8)
		_i = 0;
	if (_Size < 8)
		_Size++;
}
void	PhoneBook::PrintContacts()
{
	int i;

	i = 0;
	std::cout << "================ Phone Book =================\n";
	while (i < Size())
	{
		_Contacts[i].Print();
		i++;
	}
	std::cout << "=============================================\n";
	i = StringToInt(Contact::ReadInput("Enter Index ? > "));
	if (i >= 0 && i < Size())
		_Contacts[i].PrintPerline();
	else
		std::cout << "	Invalid Index .\n";
}

bool	PhoneBook::Exit()
{
	return (false);
}
int		PhoneBook::StringToInt(std::string	input)
{
	int	nb;

	if (input.length() != 1 || !isnumber(input[0]))
		return (-1);
	nb = input[0] - '0';
	return (nb);
}

int	PhoneBook::Size()
{
	return (_Size);
}