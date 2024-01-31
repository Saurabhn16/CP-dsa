#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    int l=a.size(),m=b.size(),n=c.size();

   sort(a.begin(), a.end());
   sort(b.begin(), b.end());
   sort(c.begin(), c.end());

//  cout<<a<<endl<<b<<endl<<c<<endl;
    int e = 0;
    int d = 0;
    int count=0;
    // cout<<c[0]<<a[0];
    for (int i = 0; i < c.size(); i++)
    {
        if (c[i] == a[e])
        {
            //  cout << c[i] ;
            e++;
            count++;
     
        }
      else   if (c[i] == b[d])
        {
        
        //  cout << c[i] ;
            d++;
    
        }
      
    
      
    }
    //  cout<<e<<" "<<d<<" "<<l<<" "<<m<<" "<<c.size();
    if ((e+d)==(l+m)&&(e+d)==c.size())
    {
        cout<<"YES";
    }
    else cout<<"NO";

    return 0;
}