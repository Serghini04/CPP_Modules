#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int size, target;
    cin >> size >> target;
    vector<int> arr(size);
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }

    int count = 0;
    int left = 0, right = 0, sum = 0;
    while (right < size)
    {
        sum += arr[right];
        while (sum > target && left < right)
        {
            sum -= arr[left];
            left++;
        }
        if (sum == target)
        {
            count++;
        }
        right++;
    }

    cout << count << "\n";
    return 0;
}