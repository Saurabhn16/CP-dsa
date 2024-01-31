#include <bits/stdc++.h>

void solve1(vector<int> nums, vector<vector<int>> &ans, int index)
{
    // base case
    if (index >= nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for (int j = index; j < nums.size(); j++)
    {
        swap(nums[index], nums[j]);
        solve(nums, ans, index + 1);

        // backtrack
        swap(nums[index], nums[j]);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> b;
    vector<int> c;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        b.push_back(k);
    }

    vector<vector<int>> ans;
    set<vector<int>> mp;
    int index = 0;

    solve1(permutation, ans, index);
    for (int i = 0; i < ans.size(); i++)
    {
        mp.insert(ans[i]);
    }
    for (auto it : mp)
    {
        cout << it << " ";
    }
    cout << endl;
}