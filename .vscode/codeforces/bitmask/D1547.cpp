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
int a[n];
int b[n];
int c[n];


int mx=-1;

 for (int  i = 0; i < n; i++)
{
     cin>>a[i];
 int k=log2(a[i])+1;
 mx=max(k,mx);

 int m=pow(2,mx)-1;
if(m%2==0 ){ 
    m=m-1;
}
 c[i]=a[i]^m;
} 
c[0]=0;
for (int  i = 0; i < n; i++)
{
    //  cin>>b[i];
  cout<<c[i]<<" ";
}cout<<endl;


// cout<<endl;
}
return 0;
}