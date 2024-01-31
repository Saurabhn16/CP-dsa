#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a+1, a + n);


for (int  i = 1; i < n; i++)
{
    if (a[0]<a[i])
    { int t=a[i]-a[0];
    if (t%2==0)
    {
        a[0]=a[0]+t/2;
    }
    
   else{ a[0]=a[0]+(t+1)/2;}    
    }
    
}
cout<<a[0];
        
cout<<endl;
    }
    return 0;
}