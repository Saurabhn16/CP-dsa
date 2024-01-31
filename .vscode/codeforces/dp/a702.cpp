#include <bits/stdc++.h>
 using namespace std;
#define int long long 
signed main() {
int n;
cin>>n;
int a[n];
for (int  i = 0; i < n; i++)
{
cin>>a[i];
}
int dp[n];
dp[0]=1;
for (int  i = 1; i < n; i++)
{
  if (a[i]>a[i-1])
  {
   dp[i]=dp[i-1]+1;
  }
  else {
     dp[i]=1;
  }
}
int mx=*max_element(dp,dp+n);
cout<<mx<<endl;

return 0;
}