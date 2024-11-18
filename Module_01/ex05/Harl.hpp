/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:14:32 by meserghi          #+#    #+#             */
/*   Updated: 2024/05/11 17:39:33 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class	Harl
{
	private :
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
	public :
		void	complain( std::string level );
};

#endif