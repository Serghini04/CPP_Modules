#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int hIndex(vector<int>& citations) {
    int c = 0;
    sort(citations.begin(), citations.end(), greater<int>());
	for (int i = 0; i < citations.size(); i++)
	{
		if (i < citations[i])
			c++;
		else
			break ;
	}
    return (c);
}

int main()
{
	vector<int> v;

	v.push_back(3);
	v.push_back(0);
	v.push_back(6);
	v.push_back(1);
	v.push_back(5);
	cout << hIndex(v) << "\n";
	return 0;
}