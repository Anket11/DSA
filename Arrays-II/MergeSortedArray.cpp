#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> res;
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (nums1[i] <= nums2[j])
        {
            res.push_back(nums1[i]);
            i++;
        }
        else
        {
            res.push_back(nums2[j]);
            j++;
        }
    }
    for (int k = i; k < m; k++)
    {
        res.push_back(nums1[k]);
    }
    for (int k = j; k < n; k++)
    {
        res.push_back(nums2[k]);
    }
    for (int i = 0; i < n + m; i++)
    {
        nums1[i] = res[i];
    }
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 0, 0, 0};
    vector<int> arr2 = {2, 5, 6};
    merge(arr1, 3, arr2, 3);
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }
    return 0;
}