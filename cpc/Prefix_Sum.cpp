#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n, index = 0;
	vector<size_t> res;
	vector<size_t> val;
	size_t input;

	cin >> n >> index;
	for (int i =0 ; i < n;i++)
	{
		cin >> input;
		res.push_back(input);
		if (i != 0)
			val.push_back(val[i - 1] + input);
		else val.push_back(input);
	}
	int i1, i2;
	// cout << "================\n";
	// for (int i =0;i < val.size(); i++)
	// 	cout << val[i] << " ";
	// cout << "\n================\n";
	for (int j = 0; j < index; j++)
	{
		cin >> i1 >> i2;
		if (i1 != 1)
			cout << val[i2 - 1] - val[i1 - 2] << "\n";
		else
			cout << val[i2 - 1] << "\n";
	}
	return (0);
}
