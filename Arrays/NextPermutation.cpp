#include <iostream>
#include <vector>
using namespace std;

void nextPermutation(vector<int> &nums)
{
    next_permutation(nums.begin(), nums.end());
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> v = {3, 2, 1};
    nextPermutation(v);
    cout << v[0] << " " << v[1] << " " << v[2];
    return 0;
}