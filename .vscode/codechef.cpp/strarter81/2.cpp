#include <bits/stdc++.h>
 using namespace std;
int main() {
long long t;
cin >> t;
while (t--)
{
long long n;
cin >> n ;
long long a[n];
int sum=0;
int e=0;
int o=0;
for (int  i = 0; i < n; i++)
{
    cin>>a[i];
    if (a[i]%2==0)
    {
        e++;
    }
    else {o++;}
    sum+=a[i];
}
if (o%2==0)
{
    cout<<"YES";
} 
else {cout<<"NO";}
cout<<endl;
// cout<<e<<" "<<o<<" ";
// cout<<sum<<endl;;
}
return 0;
}