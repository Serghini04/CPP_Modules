#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool canJump(vector<int>& nums)
{
    int	size = nums.size() - 1, max1 = 0, jumps = 0;
    for (int i = 0; i < size; i++)
    {
        max1 = max(--max1, nums[i]);
        if (max1 <= 0)
            return 0;
    }
    return 1;
}

int main()
{
	vector<int> v;
	v.push_back(2);
	v.push_back(3);
	v.push_back(1);
	v.push_back(1);
	v.push_back(4);
	cout << canJump(v) << "\n";
}