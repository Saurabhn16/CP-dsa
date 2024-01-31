#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
   int max=0;
   int min =100;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (min>a[i])
        {
             min =a[i];
        }
        if (a[i]>max)
        {
            max=a[i];
        }
        
        
    }int mn,mx;
    for (int  i = 1; i <= n; i++)
    {
        if (a[i]==min)
        {
             mn=i;
        }
        
    }
     for (int  i = 1; i <= n; i++)
    {
        if (a[i]==max)
        {
             mx=i;
             break;
        }
        
    }
    // cout<<mn<<" "<<mx<<endl;
    if (mn<mx)
    {
    cout<<(mx-2)+(n-mn);
        
    }
    else{
    cout<<(mx-1)+(n-mn);}
    

    return 0;
}