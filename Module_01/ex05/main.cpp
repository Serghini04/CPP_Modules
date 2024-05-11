/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:14:14 by meserghi          #+#    #+#             */
/*   Updated: 2024/05/11 16:03:09 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl		h;
	std::string	line;

	do
	{
		std::cout << "Please enter a level (DEBUG, INFO, WARNING, ERROR): ";
		std::string level;
		std::cin >> level;
		if (std::cin.fail())
			break;
		h.complain(level);
	} while (line.empty());
	return (0);
}
