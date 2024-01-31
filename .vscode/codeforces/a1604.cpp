#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        long long a[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<long long >p;
        long long ct=0;
        for (int  i = 0; i < n; i++)
        {
           if (a[i]>i)
           {
             p.push_back(a[i]-i);
           }  
           
        }
        long long max=*max_element(p.begin(),p.end());
        
        cout<<max-1<<endl;
        
    }
    return 0;
}
