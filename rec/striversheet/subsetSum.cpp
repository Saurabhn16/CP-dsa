#include <bits/stdc++.h>

void subsetSumsHelper(int l, vector<int> &arr, int n, vector<int> &ans,
                      int sum)
{
    if (l == n)
    {
        ans.push_back(sum);
        return;
    }
    subsetSumsHelper(l + 1, arr, n, ans, sum + arr[l]);

    subsetSumsHelper(l + 1, arr, n, ans, sum);
}
vector<int> subsetSum(vector<int> &num)
{

    vector<int> ans;
    int n = num.size();
    subsetSumsHelper(0, num, n, ans, 0);
    sort(ans.begin(), ans.end());
    return ans;
}