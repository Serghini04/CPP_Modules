/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 20:45:42 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/10 13:58:25 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	A("A");
	ClapTrap	B("B");

	A.attack("B");
	B.takeDamage(0);
	B.attack("A");
	A.takeDamage(0);
	B.beRepaired(10);
	A.beRepaired(10);
	return (0);
}
