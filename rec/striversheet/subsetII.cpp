#include <bits/stdc++.h>
void subsetSumsHelper(int l, vector<int> &arr, int n, vector<vector<int>> &ans, vector<int> &f)
{
    if (l == n)
    {

        ans.push_back(f);
        return;
    } 
    while (arr[l]==arr[l+1])
    {
        l++;
    }
    
       subsetSumsHelper(l + 1, arr, n, ans, f);
f.push_back(arr[l]);
    subsetSumsHelper(l + 1, arr, n, ans,f );
f.pop_back();
 
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    vector<vector<int>> ans;
    vector<int> f;
    sort(arr.begin(),arr.end());
    subsetSumsHelper(0, arr, n, ans, f);
    return ans;
}
