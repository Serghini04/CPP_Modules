#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int jump(vector<int>& nums)
{
    int n = nums.size();
    if (n < 2) return 0;
    int maxPos = nums[0], maxSteps = nums[0], jumps = 1;
    for (int i = 1; i < n; ++i) {
        if (maxSteps < i) {
            ++jumps;
            maxSteps = maxPos;
        }
        maxPos = max(maxPos, nums[i] + i);
    }
    return jumps;
}

int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	// v.push_back(0);
	// v.push_back(4);
	cout << jump(v) << "\n";
}
