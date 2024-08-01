/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 20:47:45 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/01 20:47:47 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAG_HPP
# define FRAGTRAG_HPP
# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	public :
		FragTrap(std::string Name);
		~FragTrap(void);
		FragTrap (void);
		FragTrap (FragTrap &clone);
		FragTrap &operator=(FragTrap &clone);
		void	highFivesGuys(void);
};

#endif