/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 10:28:32 by meserghi          #+#    #+#             */
/*   Updated: 2024/11/24 11:47:40 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverte.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
		ScalarConverte::convert(std::string(av[1]));
	else
		std::cout << "Invalid Input.\n";
}