/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:47:36 by meserghi          #+#    #+#             */
/*   Updated: 2024/05/04 14:47:24 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

PhoneBook::PhoneBook()
{
	_i = 0;
}
void	PhoneBook::AddContact()
{
	_Contacts[_i].SetContact(_i);
	_i++;
	if (_i == 8)
		_i = 0;
}
void	PhoneBook::PrintContacts()
{
	int i;

	i = 0;
	std::cout << "================ Phone Book =================\n";
	while (i < _i)
	{
		_Contacts[i].Print();
		i++;
	}
	std::cout << "=============================================\n";
	std::cout << "Enter Index ? > ";
	std::cin >> i;
	if (i < _i)
		_Contacts[i].PrintPerline();
}

bool	PhoneBook::Exit()
{
	return (false);
}
