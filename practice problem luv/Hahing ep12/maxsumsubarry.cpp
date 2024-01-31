//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    long maximumSumSubarray(int K, vector<int> &Arr, int N)
    {
        int i = 0, j = 0;
        long long mx = 0;
        long long sum = 0;

        while (j < N)
        { 
            // cout<<" I "<<i<<" J "<<j<<endl;;
            sum = sum + Arr[j];
            if (j < K + i-1)
            {
                j++;
            }
            else if (j  == K+i-1)
            { 
        // cout<<" sum= "<<sum<<endl;
                if (mx < sum)
                {
                    mx = sum;
                }

                sum = sum - Arr[i];
                i++;
                j++;
            }

        }

        return mx;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        ;
        vector<int> Arr;
        for (int i = 0; i < N; ++i)
        {
            int x;
            cin >> x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K, Arr, N) << endl;
    }
    return 0;
}
// } Driver Code Ends