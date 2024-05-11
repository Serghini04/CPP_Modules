/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:44:37 by meserghi          #+#    #+#             */
/*   Updated: 2024/05/11 17:44:06 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int ac, char **av)
{
	Harl	clsHarl;

	if (ac == 2)
		clsHarl.complain(av[1]);
	else
		std::cout << "Error you need : ./harlFilter (DEBUG, INFO, WARNING, ERROR)\n";
	return (0);
}