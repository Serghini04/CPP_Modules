/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:21:36 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/07 16:57:03 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

int main()
{
	std::vector<int>	V(4);
	V[0] = INT_MAX;
	V[1] = 455;
	V[2] = 5455;
	V[3] = INT_MIN;
	try
	{
		std::cout << "<----- Esay Find ----->\n";
		std::cout << "Value : " << *easyfind(V, INT_MAX) << "\n";
		std::cout << "Value : " << *easyfind(V, 8) << "\n";
		std::cout << "<--------------------->\n";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what();
	}

	return 0;
}
