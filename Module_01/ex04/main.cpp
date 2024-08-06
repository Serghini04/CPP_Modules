/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:39:29 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/06 10:48:25 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int ac, char **av)
{
	Replace	clsReplace;

	std::cout << "=== Sed is for losers ===\n";
	if (ac != 4)
	{
		std::cout << "   => Invalid args. <=\n";
		return (1);
	}
	if (!clsReplace.SetVar(av[1], av[2], av[3]))
		return (-1);
	clsReplace.ReplaceFromFileToFile();
	return (0);
}