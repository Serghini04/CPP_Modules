#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

int maxProfit(vector<int>& prices)
{
	int res = 0, size = prices.size();
	for (int i = 1; i < size; i++)
	{
		cout << prices[i] << " "  <<  prices[i - 1] << "\n";
		res += max(0, prices[i] - prices[i - 1]);
	}
	return (res);
}

int main()
{
    std::vector<int> v;
	v.push_back(7);
	v.push_back(1);
	v.push_back(5);
	v.push_back(3);
	v.push_back(6);
	v.push_back(4);
	cout << maxProfit(v) << "\n";
	return 0;
}