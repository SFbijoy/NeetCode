#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twosum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
int main()
{
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    int target;
    cin >> target;
    Solution sl;
    vector<int> ans = sl.twosum(num, target);
    if (ans.empty())
    {
        cout << "No two sum solution found" << endl;
    }
    else
    {
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}