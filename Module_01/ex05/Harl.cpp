/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 14:07:16 by meserghi          #+#    #+#             */
/*   Updated: 2024/07/21 17:36:41 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

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
	std::string	cmp[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void	(Harl::*ptrlevels[4])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int	i;

	i = 0;
	while (i < 4 && cmp[i] != level)
		i++;
	if (i < 4)
		(this->*ptrlevels[i])();
}
