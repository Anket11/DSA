#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    int n = intervals.size();
    sort(intervals.begin(), intervals.end(), [](vector<int> v1, vector<int> v2)
         {
            if(v1[0] == v2[0]) return v1[1] < v2[1];
            return v1[0] < v2[0]; });
    // cout << n << "\n";
    vector<vector<int>> ans;
    int start = intervals[0][0];
    int end = intervals[0][1];
    for (int i = 1; i < n; i++)
    {

        if (intervals[i][0] <= end)
        {
            end = max(end, intervals[i][1]);
        }
        else
        {
            // cout << intervals[i][0] << " " << intervals[i][1] << "\n";
            vector<int> temp;
            temp.push_back(start);
            temp.push_back(end);
            ans.push_back(temp);
            start = intervals[i][0];
            end = intervals[i][1];
        }
    }
    vector<int> temp;
    temp.push_back(start);
    temp.push_back(end);
    ans.push_back(temp);
    return ans;
}
int main()
{
    // vector<vector<int>> arr = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> arr = {{1, 4}, {0, 4}};
    arr = merge(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}