/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:53:45 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/13 15:57:42 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	(void)av;
	if (ac == 2)
	{
		try
		{
			BitcoinExchange	btc(av[1]);
			btc.getAmountOfBitcoin();
		}
		catch(const std::exception &e)
		{
			std::cout << e.what() << '\n';
		}
	}
	else
		std::cout << "Error: could not open file.\n";
	return 0;
}
