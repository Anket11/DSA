#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> res;
    for (int row = 0; row < numRows; row++)
    {
        vector<int> temp;
        for (int i = 0; i <= row; i++)
        {
            if (i == row || i == 0)
                temp.push_back(1);
            else
            {
                int value = res[row - 1][i - 1] + res[row - 1][i];
                temp.push_back(value);
            }
        }
        res.push_back(temp);
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<vector<int>> res = generate(5);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}