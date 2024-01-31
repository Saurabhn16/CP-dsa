#include <bits/stdc++.h>
 using namespace std;
int main() {
long long t;
cin >> t;
while (t--)
{
long long n, m;
cin >> n >> m;
if (n==1&&m==1)
{
    cout<<0<<endl;
}
else {
cout<<min (n,m)<<endl;}

}
return 0;
}