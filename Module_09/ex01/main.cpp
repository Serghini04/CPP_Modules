/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:08:00 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/14 16:12:44 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		try
		{
			RPN	cal;
			cal.useRPN(std::string(av[1]));
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
