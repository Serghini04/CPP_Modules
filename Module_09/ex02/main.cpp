/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 21:07:45 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/20 13:06:13 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

int main(int ac, char **av)
{
	PmergeMe	P;

	if (ac > 1)
	{
		try
		{
			P.readInput(ac, av);
			P.printResult(ac, av);
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << "\n";
		}
	}
	else
		std::cerr << "Error\n";
	return 0;
}