/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 21:07:45 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/28 13:40:43 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

int main(int ac, char **av)
{
	PmergeMe	P;

	try
	{
		if (ac == 1)
			throw std::runtime_error("Error");
		P.readInput(ac, av);
		P.printResult(ac, av);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	return 0;
}