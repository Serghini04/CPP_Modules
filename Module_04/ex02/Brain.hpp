/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:03:55 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/01 21:03:56 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain();
		void	SetIdea(int index, std::string idea);
		std::string	GetIdea(int index);
		Brain(const Brain &clone);
		Brain &operator=(const Brain &clone);
		~Brain();
};

#endif