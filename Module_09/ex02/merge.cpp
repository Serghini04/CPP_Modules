# include <iostream>
# include <vector>

void	mergeSort(std::vector<int> &v)
{
	// 1/ Divide the arry of integers base one (N/2) if odd sava last one in variable.
	// 2/ Sort the element inside the pairs in a descending order.
	// 3/ After that we have to sort the pairs based on the top of the pair in an ascending order.
	// 4/ Splits the pairs into two containers :
	//		1st Container will hold the top of the pair (main Chain).
	//		2nd Container will hold the remaining numbers (pend chain).
	//      and compare fisrt element if small will be swap
	// 5/ We need an important element which is the jacobsthal numbers that plays
	//		a crucial role in the merge insert as it decides which pend element will
	//      be inserted in the mainChain.
	//  why you need :
	//		* Minimizing Comparisons.
	//		* The Jacobsthal sequence helps determine the exact positions where new elements should be inserted.
	//		*
	// 6/ After getting the jacobsthal numbers, you need t insert the missing numbers between
	//		numbers.

}

void PmergeMe::CreateJacobsthalNumbers()
{
    _jacobsthalNumbers.clear();
    _jacobsthalNumbers.push_back(0); // Jacobsthal sequence starts at 0
    _jacobsthalNumbers.push_back(1);
    size_t max_index = _vec.size();
    for (size_t i = 2;; ++i)
    {
        size_t next = _jacobsthalNumbers[i - 1] + 2 * _jacobsthalNumbers[i - 2];
        if (next >= max_index)
            break;
        _jacobsthalNumbers.push_back(next);
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

void PmergeMe::mergeInsertionVector()
{
    int isOdd = -1;

    if (_vec.size() % 2)
    {
        isOdd = _vec.back();
        _vec.pop_back();
    }

    std::vector<std::pair<int, int> > pairs;
    for (size_t i = 0; i < _vec.size(); i += 2)
    {
        if (_vec[i] < _vec[i + 1])
            std::swap(_vec[i], _vec[i + 1]);
        pairs.push_back(std::make_pair(_vec[i], _vec[i + 1]));
    }

    // Sort pairs by the first element
    for (size_t i = 0; i < pairs.size(); ++i)
    {
        for (size_t j = i + 1; j < pairs.size(); ++j)
        {
            if (pairs[i].first > pairs[j].first)
                std::swap(pairs[i], pairs[j]);
        }
    }

    std::vector<int> main_chain;
    std::vector<int> pend_chain;

    for (size_t i = 0; i < pairs.size(); ++i)
    {
        main_chain.push_back(pairs[i].first);
        pend_chain.push_back(pairs[i].second);
    }

    CreateJacobsthalNumbers();

    for (size_t i = 0; i < _jacobsthalNumbers.size(); ++i)
    {
        if (_jacobsthalNumbers[i] < (int)pend_chain.size())
        {
            std::vector<int>::iterator it = std::upper_bound(main_chain.begin(), main_chain.end(), pend_chain[_jacobsthalNumbers[i]]);
            main_chain.insert(it, pend_chain[_jacobsthalNumbers[i]]);
        }
    }

    if (isOdd != -1)
    {
        std::vector<int>::iterator it = std::upper_bound(main_chain.begin(), main_chain.end(), isOdd);
        main_chain.insert(it, isOdd);
    }

    _vec = main_chain;
    for (size_t i = 0; i < _vec.size(); ++i)
        std::cout << _vec[i] << "\n";
}

int main()
{
	std::vector<int> v;

	v.push_back(5);
	v.push_back(2);
	v.push_back(4);
	v.push_back(3);

	mergeSort(v);

	for (int i = 0; i < v.size(); i++)
		std::cout << v[i] << "\n";
}