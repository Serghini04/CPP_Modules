/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:02:16 by meserghi          #+#    #+#             */
/*   Updated: 2024/08/15 19:57:00 by meserghi         ###   ########.fr       */
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
		std::string	GetIdea(int index) const;
		Brain(const Brain &clone);
		Brain &operator=(const Brain &clone);
		~Brain();
};

#endif