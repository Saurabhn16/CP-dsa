//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{

public:
    vector<long long> findMissing(long long A[], long long B[],
                                  int N, int M)
    {
        vector<long long> ans;

        long long mn = 10000000;

        for (int i = 0; i < N; i++)
        {
            if (A[i] < mn)
            {
                mn = A[i];
            }
        }
        for (int i = 0; i < M; i++)
        {
            if (B[i] < mn)
            {
                mn = B[i];
            }
        }

        for (int i = 0; i < N; i++)
        {
            long long t = A[i] - mn;
            A[i] = t;
        }
        for (int i = 0; i < M; i++)
        {
            long long t = B[i] - mn;

            B[i] = t;
        }

        long long mx = 0;

        for (int i = 0; i < N; i++)
        {
            if (A[i] > mx)
            {
                mx = A[i];
            }
        }
        for (int i = 0; i < M; i++)
        {
            if (B[i] > mx)
            {
                mx = B[i];
            }
        }
        // ans.push_back(mx);

        long long hsh[mx];
        for (int i = 0; i < N; i++)
        {
            hsh[A[i]]++;

            // ans.push_back(A[i]);
        }
        for (int i = 0; i < M; i++)
        {
            hsh[B[i]] = 0;
            // ans.push_back(B[i]);
        }
        for (int i = 0; i < N; i++)
        {
             if (hsh[A[i]]!=0)
             { int t=A[i]+mn;
                ans.push_back(t);
             }
             
           
        }

        // }

        return ans;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m;
        cin >> m;
        long long a[n];
        long long b[m];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
            cin >> b[i];
        vector<long long> ans;

        Solution ob;
        ans = ob.findMissing(a, b, n, m);
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";

        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends