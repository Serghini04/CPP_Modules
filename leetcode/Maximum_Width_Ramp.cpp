#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxWidthRamp(vector<int>& nums)
	{
		int res[nums.size()];
		int l = nums[0], r = nums[1], ans = 0;
		int m = res[nums.size() - 1];
		for (int i = nums.size() - 1; i >= 0; i--)
		{
			m = max(nums[i], m);
			res[i] = m;
		}
		for (int i = 0; i < nums.size(); i++)
		{
			if (l < res[i])
			{
				l++;
				ans++;
			}
			if (r > res[i])
			{
				ans--;
				r++;
			}
		}
		return ans;
    }
};


int main()
{
	Solution	a;
	vector<int> v;
	v.push_back(6);
	v.push_back(0);
	v.push_back(8);
	v.push_back(2);
	v.push_back(1);
	v.push_back(5);
	cout << a.maxWidthRamp(v) << "\n";
	return 0;
}