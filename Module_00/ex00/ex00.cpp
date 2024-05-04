/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 19:08:57 by meserghi          #+#    #+#             */
/*   Updated: 2024/05/03 14:46:06 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex00.hpp"

void	Megaphone(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			std::cout << (char)(str[i] - 32);
		else
			std::cout << str[i];
		i++;
	}
}

int main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	while (++i < ac)
		Megaphone(av[i]);
	std::cout << std::endl;
	return (0);
}
