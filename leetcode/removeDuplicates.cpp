#include "leetcode.hpp"

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
		int v = 0;
		int j = 1;
		int s = nums.size();
		for (int i = 1; i < s; i++)
		{
			if (nums[i] == nums[i - 1])
				v++;
			else
				v = 0;
			if (v < 2)
			{
				nums[j] = nums[i];
				j++;
			}
		}
		return (j);
    }
};

int main()
{
	Solution	a;

	std::vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(4);
	nums.push_back(9);
	nums.push_back(0);
	nums.push_back(10);
	int s = a.removeDuplicates(nums);
	for (int i = 0; i < s; i++)
		std::cout << nums[i] << std::endl;
	return (0);
}