/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:53:22 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/17 20:27:43 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

int	PmergeMe::parseInput(std::string line)
{
	long res = 0;
	int i = 0;
	if (line.empty() || line.size() < 1 || (!std::isdigit(line[0]) && line[0] != '+'))
		throw std::runtime_error("Error: Invalid input!");
	if (line[i] == '+' && std::isdigit(line[i + 1]))
		i++;
	for (; line[i]; i++)
	{
		if (std::isdigit(line[i]))
			res = res * 10 + (line[i] - 48);
		else
			throw std::runtime_error("Error: Invalid input!");
		if (res > INT_MAX)
			throw std::runtime_error("Error: Invalid input!");
	}
	return res;
}

void	PmergeMe::mergeInsertionVector()
{
	int	isOdd = -1;
	// 1/ Divide the arry of integers base one (N/2) if odd sava last one in variable.
	if (_vec.size() % 2)
	{
		isOdd = _vec[_vec.size() - 1];
		_vec.pop_back();
	}
	std::vector<std::pair<int, int> > pairs;
	// 2/ Sort the element inside the pairs in a descending order.
	for (int i = 0; i < (int)_vec.size() - 1; i += 2)
	{
		if (_vec[i] < _vec[i + 1])
			std::swap(_vec[i], _vec[i + 1]);
		pairs.push_back(std::pair<int, int>(_vec[i], _vec[i + 1]));
	}
	// 3/ After that we have to sort the pairs based on the top of the pair in an ascending order.
	for (int i = 0; i < (int)pairs.size() - 1; i++)
	{
		if (pairs[i].first > pairs[i + 1].first)
			std::swap(pairs[i], pairs[i + 1]);
	}
	// 4/ Splits the pairs into two containers :
	//		1st Container will hold the top of the pair (main Chain).
	//		2nd Container will hold the remaining numbers (pend chain).
	//      and you know are first element in second vector is small that why go this element to first vector
	std::vector<int> first;
	std::vector<int> second;
	for (int i = 0; i < (int)pairs.size(); i++)
	{
		if (i == 0)
			first.push_back(pairs[i].second);
		else
			second.push_back(pairs[i].second);
		first.push_back(pairs[i].first);
	}

	//  <<I will add be soon.>>

	// print Res :
	puts("Fisrt Vec : ");
	for (int i = 0; i < (int)first.size(); i++)
		std::cout << first[i] << "\n";
	puts("Second Vec : ");
	for (int i = 0; i < (int)second.size(); i++)
		std::cout << second[i] << "\n";
}

void	PmergeMe::readInput(int ac, char **av)
{
	for (int i = 1; i < ac; i++)
	{
		_vec.push_back(parseInput(std::string(av[i])));
	}
	mergeInsertionVector();
}