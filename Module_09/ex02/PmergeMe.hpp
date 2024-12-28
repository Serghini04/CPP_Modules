/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:51:59 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/28 15:51:00 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>
# include <vector>
# include <deque>
# include <ctime>
# include <iomanip>

class	PmergeMe
{
	private :
		std::vector<int>	_vec;
		std::deque<int>		_deque;
		std::deque<int>		_jacobsthalNbsDeque;
		std::vector<int>	_jacobsthalNbsVec;
		double				_durationVector;
		double				_durationDeque;
	public :
		PmergeMe();
		PmergeMe(const PmergeMe &clone);

		PmergeMe &operator=(const PmergeMe &clone);
		void	readInput(int ac, char **av);
		int		parseInput(std::string line);
		template <typename T> void CheckDoubleSorted(T data)
		{
			size_t	count = 1;
    		for (size_t i = 0; i < data.size(); i++)
			{
                if (std::find(data.begin() + i + 1, data.end(), data[i]) != data.end())
                    throw std::runtime_error("Error: Duplicate number!");
				if (i < data.size() - 1 && data[i] < data[i + 1])
					count++;
            }
			if (count == data.size())
				throw std::runtime_error("Error: Input is really sorted!");
		}
		void	mergeInsertionVector();
		void	mergeInsertionDeque();
		void	CreateJacobsthalNumbersVec();
		void	CreateJacobsthalNumbersDeque();
		void	printResult(int ac, char **av);
		
		~PmergeMe();
};
