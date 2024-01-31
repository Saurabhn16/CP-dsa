#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[4];
    int d;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    cin>>d;
    int ct=0;
    for (int  i = 1; i <=d; i++)
    {if (i%a[0]==0||i%a[1]==0||i%a[2]==0||i%a[3]==0)
    {
         ct++;
    }
    }cout<<ct;
    
    
    return 0;
}