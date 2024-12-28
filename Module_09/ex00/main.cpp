/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:53:45 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/28 13:13:08 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	(void)av;
	try
	{
		if (ac != 2)
			throw std::runtime_error("Error: could not open file.");
		BitcoinExchange	btc(av[1]);
		btc.getAmountOfBitcoin();
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	return 0;
}
