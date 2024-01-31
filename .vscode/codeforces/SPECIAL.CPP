#include <bits/stdc++.h>
using namespace std;
 
int   countElements(long long  a[], long long  n)
{
 
    
    int count[n + 1] = {0};
    memset(count, 0, sizeof(count));
     
    int x = 0;
 
    for(int i = 0; i < n; i++)
    {
        ++count[a[i]];
    }
     
    for(int l = 0; l < n; ++l)
    {
        int sum = 0;
 
        for(int r = l; r < n; ++r)
        {
            sum += a[r];
 
            if (l == r)
                continue;
 
            if (sum <= n)
            {
                 
                x += count[sum];
 
                count[sum] = 0;
            }
        }
    }
 
    return x;
}
 

int   main()
{
 int t ;
 cin>>t;
 while(t--){
    long long N;
    cin>>N;
    long long a[N];
    for (int  i = 0; i < N; i++)
    {
        cin>>a[i];
    }
    
    cout << countElements(a, N)<<endl;}
}
