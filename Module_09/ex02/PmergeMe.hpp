/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:51:59 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/17 20:00:46 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>
# include <vector>

class	PmergeMe
{
	private :
		std::vector<int>	_vec;
	public :
		void	readInput(int ac, char **av);
		int		parseInput(std::string line);
		void	mergeInsertionVector();
};
