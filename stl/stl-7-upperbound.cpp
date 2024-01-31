#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // int a[n];
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)    
    {
        cout << a[i] << " ";
    }
    cout << endl;
    auto it= upper_bound(a.begin(),a.end(),5);
    // int *ptr =lower_bound(a,a+n,26);
       if (it==a.end())
       {
        cout<<"not found";
       }
       
    cout<<(*ptr)<<endl;
}