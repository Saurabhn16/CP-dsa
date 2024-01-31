#include <bits/stdc++.h>
 using namespace std;
#define int long long 


void generateStrings(string current, int length, vector<string> &result)
{
    if (current.length() == length)
    {
        result.push_back(current);
        return;
    }

    generateStrings(current + "4", length, result);
    generateStrings(current + "7", length, result);
}

signed main() 
{
    int max_length = 9;
    vector<string> result;

    for (int length = 1; length <= max_length; ++length)
    {
        string current = "";
        generateStrings(current, length, result);
    }

    vector<int> ans;
    // Display the generated strings
    for (const string &str : result)
    {
        // cout << str << endl;
        int n = stoi(str);
        ans.push_back(n);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        // cout << ans[i] << endl;
    }
    sort(ans.begin(),ans.end());
    int n;
    cin >> n;
    int ct = 0;
  
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] <= n)
        {
            ct++;
        }
        else
        {
            break;
        }
    }
    cout<<ct<<endl;

    return 0;
}
