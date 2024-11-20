/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 20:47:52 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/10 16:28:57 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap	A("A");
	FragTrap	B("B");

	A.highFivesGuys();
	B.highFivesGuys();
	A.attack("B");
	B.takeDamage(30);
	B.attack("A");
	A.takeDamage(30);
	return (0);
}