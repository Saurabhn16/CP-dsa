#include <bits/stdc++.h>
 using namespace std;
#define int long long 
signed main() {
long long t;
cin >> t;
while (t--)
{
long long n;
cin >> n ;
int ct=0;
for (int  i = 1; i <=n*n; i++)
{
    if (i%2==0)
    {
        cout<<i<<" "; ct++;
         if (ct%n==0)
    {
        cout<<endl;
    }
       
    }
   
    
    
}

for (int  i = 1; i <=n*n; i++)
{
      if (i%2!=0)
    {
        cout<<i<<" ";
        ct++;
          if (ct%n ==0)
    {
        cout<<endl;
    }
    }
  
    
}
cout<<endl;

;
}
return 0;
}