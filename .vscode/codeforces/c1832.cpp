#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int a[n];
        vector<int> x;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ct = 1;
        int b = 1;
        int i = 1;
        x.push_back(a[0]);
        while (i != n-1)
        {
               
            int k = x.size();
            //  cout<<a[i]<<" "<<x[k-1]<<endl;
            if (x[k - 1] > a[i])
            { 
                if (b == 0)
                {
                    ct++;
                    x.push_back(a[i]);
                
                }
                if (a[i]==0&&(x[k-1]!=0))
                {
                 x.push_back(a[i]);
                }
                
            }
            k = x.size();
            if (x[k - 1] < a[i])
            {
                if (b == 1)
                {
                    ct++;
                    x.push_back(a[i]);
                }
             if (a[i]==0&&(x[k-1]!=0))
                {
                 x.push_back(a[i]);
                }
            }
            i++;
        }
        int k=x.size();
        if ( x[k-1]!=a[n-1])
        {
                x.push_back(a[n-1]);
        }
        
      
        for (int  i = 0; i < x.size(); i++)
        {
           cout<<x[i]<<" ";
        }cout<<endl;
        
        // /cout << endl;
        cout << x.size()<< endl;
    }
    return 0;
}