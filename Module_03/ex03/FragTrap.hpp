/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:00:31 by meserghi          #+#    #+#             */
/*   Updated: 2024/11/20 14:54:54 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAG_HPP
# define FRAGTRAG_HPP
# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public :
		FragTrap(std::string Name);
		~FragTrap(void);
		FragTrap (void);
		FragTrap (FragTrap const &clone);
		FragTrap &operator=(FragTrap const &clone);
		void	highFivesGuys(void);
};

#endif