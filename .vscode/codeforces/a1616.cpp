#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>> a[i];
        }
        sort(a, a + n);
        for (int  i = 0; i < n; i++)
        {
             if (a[i]==a[i+1])
             {
                a[i+1]=-1*a[i+1];
             }
             
        }
        sort(a,a+n);
         int ct=0;
         for (int  i = 0; i < n; i++)
         {
         cout<<a[i]<<" ";
         }
         
        for (int  i = 0; i < n; i++)
        
        {if (a[i]!=a[i+1])
        {
             ct++;
        }
        
        }
        
        cout<<ct<<endl;
         
    } 
}