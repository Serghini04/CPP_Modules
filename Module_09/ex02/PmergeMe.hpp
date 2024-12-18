/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:51:59 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/18 10:20:36 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>
# include <vector>

class	PmergeMe
{
	private :
		std::vector<int>	_vec;
		std::vector<int>	_jacobsthalNumbers;
	public :
		PmergeMe();
		void	readInput(int ac, char **av);
		int		parseInput(std::string line);
		void	mergeInsertionVector();
		void	CreateJacobsthalNumbers();
};
