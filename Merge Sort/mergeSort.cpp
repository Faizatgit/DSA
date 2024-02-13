#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &nums, int l, int mid, int r)
{
    int n = nums.size();
    int b[10];
    int i = l;
    int j = mid + 1;
    int k = l;
    while (i <= mid && j <= r)
    {
        if (nums[i] < nums[j])
        {
            b[k] = nums[i];
            i++;
        }
        else
        {
            b[k] = nums[j];
            j++;
        }
        k++;
    }
    if (i > mid)
    {
        while (j <= r)
        {
            b[k] = nums[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = nums[i];
            i++;
            k++;
        }
    }
    for (k = l; k <= r; k++)
    {
        nums[k] = b[k];
    }
}

void mergeSort(vector<int> &nums, int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(nums, l, mid);
        mergeSort(nums, mid + 1, r);
        merge(nums, l, mid, r);
    }
}

int main()
{
    vector<int> nums = {9, 4, 7, 6, 3, 1, 5};
    int n = nums.size();
    mergeSort(nums, 0, n - 1);
    cout << "The sorted array is: " << endl;
    for (auto i : nums)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}