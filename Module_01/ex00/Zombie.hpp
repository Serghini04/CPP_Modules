/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:45:26 by meserghi          #+#    #+#             */
/*   Updated: 2024/05/08 13:47:11 by meserghi         ###   ########.fr       */
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

Zombie	*newZombie( std::string name );
void randomChump( std::string name );

#endif