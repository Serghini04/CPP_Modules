#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int m = 3, n = 3;
	std::vector<int> nums1;
	nums1.erase();
	nums1.push_back(3);
	nums1.push_back(0);
	nums1.push_back(0);
	nums1.push_back(0);

	std::vector<int> nums2;
	nums2.push_back(2);
	nums2.push_back(5);
	nums2.push_back(6);
	std::vector<int>  res;

	for (int i = m, j = 0; i < n + m; i++, j++)
	{
		nums1[i] = nums2[j];
	}
	for (int i = 0; i < m + n; i++)
		std::cout << nums1[i] << "\n";
	std::cout << "--------------------\n";
	std::sort(nums1.begin(), nums1.end());
	for (int i = 0; i < m + n; i++)
		std::cout << nums1[i] << "\n";
	return (0);
}
