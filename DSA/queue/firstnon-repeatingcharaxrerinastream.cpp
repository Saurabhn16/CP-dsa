//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string FirstNonRepeating(string A)
    {
        string k;
        unordered_map<char, int> mp;
        queue<char> q;
        for (int i = 0; i < A.size(); i++)
        {
            mp[A[i]]++;

            q.push(A[i]);
            while (!q.empty())
            {
                if (mp[q.front()] > 1)
                {
                    q.pop();
                }
                else
                {
                    k.push_back(q.front());
                    break;
                }
            }
            if (q.empty())
            {
                k.push_back('#');
            }
        }

        return k;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string A;
        cin >> A;
        Solution obj;
        string ans = obj.FirstNonRepeating(A);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends