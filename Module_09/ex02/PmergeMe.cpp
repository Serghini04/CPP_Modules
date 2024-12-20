/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meserghi <meserghi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:53:22 by meserghi          #+#    #+#             */
/*   Updated: 2024/12/20 16:57:26 by meserghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

void	PmergeMe::CreateJacobsthalNumbersVec()
{
	std::vector<int> jacoNums;
	jacoNums.push_back(0);
	jacoNums.push_back(1);

	for (size_t i = 2; i < _vec.size(); i++)
		jacoNums.push_back(jacoNums[i - 1] + 2 * jacoNums[i - 2]);

	for (size_t i = 1; i < jacoNums.size() && _jacobsthalNbsVec.size() < _vec.size(); i++)
	{
	int	s = jacoNums[i - 1], end = jacoNums[i];
		while (end > s)
			_jacobsthalNbsVec.push_back(end--);
	}
}

void	PmergeMe::CreateJacobsthalNumbersDeque()
{
    std::deque<int> jacoNums;
	jacoNums.push_back(0);
	jacoNums.push_back(1);

	for (size_t i = 2; i < _deque.size(); i++)
		jacoNums.push_back(jacoNums[i - 1] + 2 * jacoNums[i - 2]);

	for (size_t i = 1; i < jacoNums.size() && _jacobsthalNbsDeque.size() < _deque.size(); i++)
    {
		int	s = jacoNums[i - 1], end = jacoNums[i];
		while (end > s)
			_jacobsthalNbsDeque.push_back(end--);
	}
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

bool comparePairs(const std::pair<int, int>& a, const std::pair<int, int>& b)
{
    return a.first < b.first;
}

void PmergeMe::mergeInsertionVector()
{
	int isOdd = -1;

	// 0/ if odd sava last one in variable.
	if (_vec.size() % 2)
	{
		isOdd = _vec.back();
		_vec.pop_back();
	}

	// 1/ Divide the arry of integers base one (N/2)
	std::vector<std::pair<int, int> > pairs;

	// 2/ Sort the element inside the pairs in a descending order.
	for (size_t i = 0; i < _vec.size(); i += 2)
	{
		if (_vec[i] < _vec[i + 1])
			std::swap(_vec[i], _vec[i + 1]);
		pairs.push_back(std::make_pair(_vec[i], _vec[i + 1]));
	}

	// 3/ After that we have to sort the pairs based on the top of the pair in an ascending order.
	std::sort(pairs.begin(), pairs.end(), comparePairs);

	std::vector<int> firstPart;
	std::vector<int> secondPart;

	// 4/ Splits the pairs into two containers :
	//		1st Container will hold the top of the pair (main Chain).
	//		2nd Container will hold the remaining numbers (pend chain).
	for (size_t i = 0; i < pairs.size(); ++i)
	{
		if (i == 0)
		    firstPart.push_back(pairs[i].second);
		firstPart.push_back(pairs[i].first);
		secondPart.push_back(pairs[i].second);
	}

	// 5/ We need an important element which is the jacobsthal numbers that plays
	//		a crucial role in the merge insert as it decides which pend element will
	//      be inserted in the mainChain.
	CreateJacobsthalNumbersVec();

	// 6/ After getting the jacobsthal numbers, you need t insert the missing numbers between
	//		numbers.
	for (size_t i = 0; i < _jacobsthalNbsVec.size(); ++i)
	{
		if (_jacobsthalNbsVec[i] < (int)secondPart.size())
		{
			std::vector<int>::iterator it = std::upper_bound(firstPart.begin(), firstPart.end(), secondPart[_jacobsthalNbsVec[i]]);
			firstPart.insert(it, secondPart[_jacobsthalNbsVec[i]]);
		}
	}

	// 7/ Finally add odd one if are exist
	if (isOdd != -1)
	{
		std::vector<int>::iterator it = std::upper_bound(firstPart.begin(), firstPart.end(), isOdd);
		firstPart.insert(it, isOdd);
	}

	_vec = firstPart;
}

void	PmergeMe::mergeInsertionDeque()
{
	std::deque<std::pair<int, int> > dequePairs;
	int isOdd = -1;

	if (_deque.size() % 2)
	{
		isOdd = _deque.back();
		_deque.pop_back();
	}

	for (size_t i = 0; i < _deque.size(); i +=2)
	{
		if (_deque[i] < _deque[i + 1])
			std::swap(_deque[i], _deque[i + 1]);
		dequePairs.push_back(std::make_pair(_deque[i], _deque[i + 1]));
	}

	std::sort(dequePairs.begin(), dequePairs.end(), comparePairs);

	std::deque<int> firstPart;
	std::deque<int> secondPart;

	for (size_t i = 0; i < dequePairs.size(); i++)
	{
		if (i == 0)
		    firstPart.push_back(dequePairs[i].second);
		firstPart.push_back(dequePairs[i].first);
		secondPart.push_back(dequePairs[i].second);
	}

	CreateJacobsthalNumbersDeque();

	for (size_t i = 0; i < _jacobsthalNbsVec.size(); ++i)
	{
		if (_jacobsthalNbsVec[i] < (int)secondPart.size())
		{
			std::deque<int>::iterator it = std::upper_bound(firstPart.begin(), firstPart.end(), secondPart[_jacobsthalNbsVec[i]]);
			firstPart.insert(it, secondPart[_jacobsthalNbsVec[i]]);
		}
	}
	if (isOdd != -1)
	{
		std::deque<int>::iterator it = std::upper_bound(firstPart.begin(), firstPart.end(), isOdd);
		firstPart.insert(it, isOdd);
	}

	_deque = firstPart;
}

void	PmergeMe::readInput(int ac, char **av)
{
	clock_t	s = clock();
	for (int i = 1; i < ac; i++)
		_vec.push_back(parseInput(std::string(av[i])));
	CheckDoubleSorted(_vec);
	mergeInsertionVector();
	_durationVector = static_cast<double>(clock() - s) / CLOCKS_PER_SEC;

	s = clock();
	for (int i = 1; i < ac; i++)
		_deque.push_back(parseInput(std::string(av[i])));
	CheckDoubleSorted(_deque);
    mergeInsertionDeque();
	_durationDeque = static_cast<double>(clock() - s) / CLOCKS_PER_SEC;
}

void	PmergeMe::printResult(int ac, char **av)
{
	std::cout << "Before:	";
	for (int i = 1; i < ac; i++)
	{
		std::cout << std::atoi(av[i]);
		if (i + 1 != ac)
			std::cout << " ";
	}

	std::cout << "\nAfter:	";
	for (int i = 1; i < ac; i++)
	{
		std::cout << std::atoi(av[i]);
		if (i + 1 != ac)
			std::cout << " ";
	}

	std::cout << "\nTime to process a range of " << _vec.size()
		<< " elements with std::vec : " << _durationVector << " us\n";

	std::cout << "Time to process a range of " << _vec.size()
		<< " elements with std::deque : " << _durationVector << " us\n";
}