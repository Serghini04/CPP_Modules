/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:32:20 by meserghi          #+#    #+#             */
/*   Updated: 2024/05/08 14:08:21 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>


class	Zombie
{
	private:
		std::string	_Name;
	public:
		~Zombie ( void );
		void	SetName(std::string Name);
		void 	announce( void );
};

Zombie	*zombieHorde( int N, std::string name );

#endif