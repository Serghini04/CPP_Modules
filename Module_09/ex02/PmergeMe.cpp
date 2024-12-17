/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:53:22 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/17 18:30:32 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"


PmergeMe::PmergeMe(int size) : _arr(size)
{

}
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

void	PmergeMe::mergeInsertion()
{
	// 1/ Divide the arry of integers base one (N/2) if odd sava last one in variable.
	// 2/ Sort the element inside the pairs in a descending order.
	for (int i = 0; i < _arr.size(); i++)
		std::cout << _arr[i] << "\n";

}

void	PmergeMe::readInput(int ac, char **av)
{
	for (int i = 1; i < ac; i++)
	{
		_arr.push_back(parseInput(std::string(av[i])));
	}
	mergeInsertion();

}