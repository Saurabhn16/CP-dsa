#include <bits/stdc++.h>
 using namespace std;
#define int long long 
double eps =1e-6;

signed main() {
long long t;
cin >> t;
while (t--)
{double x;
cin>>x;
double lo=1,hi=x,mid;
while(hi-lo>eps){
     mid=(hi+lo)/2;
     if (mid*mid<x){
         lo=mid;
     }
     else
     {
        hi=mid;
     }
     
}
cout<<lo<<endl;
}
return 0;
}