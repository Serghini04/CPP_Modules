/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:45:38 by meserghi          #+#    #+#             */
/*   Updated: 2024/07/27 11:21:47 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

void	Harl::debug( void )
{
	std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain( std::string level )
{
	std::string	cmp[] = {"DEBUG" "INFO" "WARNING" "ERROR"};

	void	(Harl::*ptrlevels[4])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int	i;

	i = 0;
	while (i < 4 && cmp[i] != level)
		i++;
	switch (i)
	{
		case (0):
		{
			std::cout << "[ " << cmp[0] << " ]\n";
			(this->*ptrlevels[0])();
		}
		case (1):
		{
			std::cout << "[ " << cmp[1] << " ]\n";
			(this->*ptrlevels[1])();
		}
		case (2):
		{
			std::cout << "[ " << cmp[2] << " ]\n";
			(this->*ptrlevels[2])();
		}
		case (3):
		{
			std::cout << "[ " << cmp[3] << " ]\n";
			(this->*ptrlevels[3])();
			break;
		}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}

