#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long a[3];
        cin >> a[0] >> a[1] >> a[2];
       
       
        for (int  i = 0; i < 3; i++)
        {
            long long temp=a[i];
            a[i]=0;
           long long  mx=*max_element(a,a+3);
           if (temp == mx)
           {
            cout<<"1"<<" ";
           }
           if (temp<mx)
           {
             cout<<mx-temp+1 <<" ";
           } if (temp>mx)
           {
             cout<<0 <<" ";
           }
          
           a[i]=temp;
           
        }cout<<endl;
        
    }
    return 0;
}