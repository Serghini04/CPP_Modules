/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:32:02 by meserghi          #+#    #+#             */
/*   Updated: 2024/05/08 14:07:34 by meserghi         ###   ########.fr       */
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
	while (i < 5)
	{
		clsZombie[i].announce();
		i++;
	}
	delete []clsZombie;
	return (0);
}