#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        int a[7];
    for (int i = 0; i < 7; i++)
    {
         cin>>a[i];
    }
    int c;
 if (a[2]==(a[1]+a[0]))
 {
     c=a[3];
 }
 else{c=a[2];}
 
    cout<<a[0]<<" " <<a[1]<<" "<<c<<endl;
    
    }}