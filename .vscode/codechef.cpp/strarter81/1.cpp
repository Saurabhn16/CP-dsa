#include <bits/stdc++.h>
 using namespace std;
int main() {
long long t;
cin >> t;
while (t--)
{
long long n, m;
cin >> n >> m;
int w=n*m;

if (n<=8)
{
    if (w<=500)
    {
    cout<<"YES"<<endl;
    }
    else {cout<<"NO"<<endl;}
    
}
else{cout<<"NO"<<endl;}


}
return 0;
}