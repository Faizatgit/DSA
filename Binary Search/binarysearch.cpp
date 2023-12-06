#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool binarySearch(vector<int> &nums, int num)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (nums[mid] == num)
        {
            return true;
        }
        else if (nums[mid] < num)
        {
            low = mid + 1;
        }
        else if (nums[mid] > num)
        {
            high = mid - 1;
        }
    }
    return false;
}

int main()
{
    vector<int> nums = {5, 23, 7, 2, 9, 7, 0};
    bool res = binarySearch(nums, 6);
    if (res)
    {
        cout << "Element is present ";
    }
    else
    {
        cout << "Element is not present ";
    }
    return 0;
}