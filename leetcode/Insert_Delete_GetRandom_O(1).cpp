#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
using namespace std;


class RandomizedSet {
	map<int, int> m;
public:
	bool	is_exist(int val)
	{
		if (m.find(val) != m.end())
			return 1;
		return 0;
	}
    RandomizedSet()
	{
	}
    bool insert(int val)
	{
		if (is_exist(val))
			return 0;
		m[val] = m.size() - 1;
		return true;
    }
    bool remove(int val)
	{
		if (!is_exist(val))
			return 0;
		m.erase(val);
		return 1;
    }
    int getRandom()
	{
		auto u = m.begin();
		return u->first;
    }
};


int main()
{
	RandomizedSet	a;

	cout << a.insert(1) << "\n";
	cout << a.insert(2) << "\n";
	cout << a.insert(0) << "\n";
	cout << a.getRandom() << "\n";
	cout << a.getRandom() << "\n";
	cout << a.getRandom() << "\n";
	return 0;
}