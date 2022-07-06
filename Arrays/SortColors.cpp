#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int> &nums)
{
    int n = nums.size();
    int arr[3] = {0};
    for (int i = 0; i < n; i++)
    {
        arr[nums[i]]++;
    }
    fill_n(nums.begin(), arr[0], 0);
    fill_n(nums.begin() + arr[0], arr[1], 1);
    fill_n(nums.begin() + arr[0] + arr[1], arr[2], 2);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> v = {2, 0, 2, 1, 1, 0};
    sortColors(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";

    return 0;
}