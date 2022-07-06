#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int n = nums.size(), sum = INT_MIN, cursum = 0;

    for (int i = 0; i < n; i++)
    {
        cursum += nums[i];
        sum = max(sum, cursum);
        if (cursum < 0)
        {
            cursum = 0;
        }
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> v = {5, 4, -1, 7, 8};
    cout << maxSubArray(v);

    return 0;
}