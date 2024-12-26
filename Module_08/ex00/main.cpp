/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:21:36 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/26 12:27:45 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

int main()
{
	std::vector<int>	V(4);
	V[0] = 0;
	V[1] = 455;
	V[2] = 5455;
	V[3] = INT_MAX;
	try
	{
		std::cout << "<----- Esay Find ----->\n";
		std::cout << "Value : " << *easyfind(V, INT_MAX) << "\n";
		std::cout << "Value : " << *easyfind(V, 0) << "\n";
		std::cout << "Value : " << *easyfind(V, 1) << "\n";
		std::cout << "<--------------------->\n";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what();
		std::cout << "<--------------------->\n";
	}

	return 0;
}
