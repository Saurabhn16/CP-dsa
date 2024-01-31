#include <bits/stdc++.h>
using namespace std;

int main()
{
    int lng=1e6;
    long long t;
    cin >> t;
    while (t--)
    {
        long long  a, b;
        cin >> a >> b;
        if ((a + b) % 2 == 0)
        { if (a>b)
        {
           
  cout <<(a + b) / 2<< " 0" ;
        } else {  cout << "0 " <<(a + b) / 2;}
        

            
        }
        else
        {
            cout << "-1 -1";
        }
    
    cout << endl;}
}