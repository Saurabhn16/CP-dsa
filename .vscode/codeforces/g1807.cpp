#include <bits/stdc++.h>
using namespace std;
bool isSubsetSum(long long set[], long long n, long long sum)
{

    bool subset[n + 1][sum + 1];

    for (long long i = 0; i <= n; i++)
        subset[i][0] = true;

    for (long long i = 1; i <= sum; i++)
        subset[0][i] = false;

    for (long long i = 1; i <= n; i++)
    {
        for (long long j = 1; j <= sum; j++)
        {
            if (j < set[i - 1])
                subset[i][j] = subset[i - 1][j];
            if (j >= set[i - 1])
                subset[i][j] = subset[i - 1][j] || subset[i - 1][j - set[i - 1]];
        }
    }

    return subset[n][sum];
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        // cout<<t<<endl;
        //  cout<<endl;
        long long n;
        cin >> n;
        long long arr[n];
        long long sum = 0;
        long long prev[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (n == 1)
        {
            if (arr[0] == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {

            sort(arr, arr + n);
            prev[0] = arr[0];
            for (int i = 1; i < n; i++)
            {
                prev[i] = arr[i] + prev[i - 1];
            }

            // cout<<endl;
            for (int i = 0; i < n; i++)
            {
                // cout << prev[i] << " ";
            }
            int bol = 1;
            for (int i = 0; i < n; i++)
            {
            //  if (prev[i]!=1)
             
                
             
             
                // int k = prev[i];
                // prev[i]=0;
                // if (isSubsetSum(prev, n, k))
                // {
                // }
                // else
                // {
                //     bol = 0;
        
                // }
                // prev[i] = k;
                // cout << prev[i] << bol << " ";}
             
            }
            if (bol == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }

            // cout << endl;
        }
    }
    return 0;
}