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