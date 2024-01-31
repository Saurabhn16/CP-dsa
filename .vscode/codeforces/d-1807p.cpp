#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    { 
        // cout<<t<<endl;
        //  cout<<endl;
        long long q, n;
        cin >> n >> q;
        long long arr[n];
        long long sum = 0;
        long long prev[n];

        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        prev[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            prev[i] = arr[i] + prev[i - 1];
        }
        
        
        // cout<<endl;
        for (int i = 0; i < n; i++)
        {
            // cout << arr[i] << " ";
        }

    
        while (q--)
        {

            //  cout<<q<<" ";
            long long x, y, z;
            cin >> x >> y >> z;
            // cout << x << " " << y << " " << z<< " ";
            long long sum1 = sum - (prev[y - 1] - (prev[x - 1] - arr[x - 1])) + (y - x + 1) * z;
          
            sum1=abs(sum1);
            //   cout<<sum1<<" "; 
            if (sum1 % 2 == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        
        }
    }
    return 0;
}