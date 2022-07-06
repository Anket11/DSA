#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    if (n == 1)
    {
        return 0;
    }
    int profit = 0, minp = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        minp = min(minp, prices[i]);
        profit = max(profit, prices[i] - minp);
    }
    return profit;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> v = {7,1,5,3,6,4};
    cout << maxProfit(v) << "\n";
    return 0;
}