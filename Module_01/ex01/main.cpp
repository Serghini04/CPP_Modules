/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:32:02 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/06 09:31:00 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*clsZombie;
	int		i;
	int		n;

	i = 0;
	n = 5;
	clsZombie = zombieHorde(n, "Z1");
	if (!clsZombie)
		return (1);
	while (i < n)
	{
		clsZombie[i].announce();
		i++;
	}
	delete []clsZombie;
	return (0);
}
