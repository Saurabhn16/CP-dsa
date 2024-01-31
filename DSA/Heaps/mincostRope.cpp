//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n)
    {
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        long long sum = 0;
        for (long long i = 0; i < n; i++)
        {
            pq.push(arr[i]);
        }
        for (long long i = 0; i < n; i++)
        {
            long long k = pq.top();
            pq.pop();
            long long m = pq.top();
            pq.pop();
            long long ans = k + m;
            sum += ans;
            if (pq.empty())
            {
                return sum;
            }
            else
            {
                pq.push(ans);
            }
        }
    }
};

//{ Driver Code Starts.

long long main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends