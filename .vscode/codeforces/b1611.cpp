#include <bits/stdc++.h>
using namespace std;

int main()
{
    int lng = 1e6;
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;int total =(a+b)/(4);
        // cout<<total;
      if (a>0&&b>0)
      {  if (total>a)
      {
          cout<<a;
      } 
      else if (total>b)
      {
         cout<<b;
      }
       else {cout<<total;}
              
      }
      
      else {cout<<0;}
      cout<<endl;
    }
}