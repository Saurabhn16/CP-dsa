#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
     int count = 0;
    while (t>0)
    {
    
    
    
    
        if (t >= 100)
        {  
            count += t / 100;
            t=t%100;
        }
        else if (t >=20)
        {
            count += t / 20;
             t=t%20;
        }
        else if (t >= 10)
        {
            count += t / 10;
             t=t%10;
        }  
         else if (t >=5)
        {
            count += t / 5;
             t=t%5;
        }
        else {count +=t;t=t%1;
    
        }
    }
    cout<<count;

    return 0;
}