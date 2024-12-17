/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:51:59 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/17 19:31:50 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>
# include <set>

class	PmergeMe
{
	private :
		std::set<int>	_arr;
	public :
		PmergeMe(int size);
		void	readInput(int ac, char **av);
		int		parseInput(std::string line);
		void	mergeInsertion();
};
