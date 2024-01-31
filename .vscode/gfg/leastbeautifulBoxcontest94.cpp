#include <bits/stdc++.h>
using namespace std;
int minimumBeauty(vector<long long> &a)
{
    sort(a.begin(), a.end());
    set<int, greater<int>> s;
    for (int i = 0; i < a.size(); i++)
    {
        s.insert(a[i]);
    }
      int ct = 0;
    vector<long long> b;
    for (auto i : s)
    { int k=i;
     
        int ct = count(a.begin(), a.end(), k);
        b.push_back(ct);
        // cout << i << ' ';
    }
    // cout<<endl;
    //    for (int  i = 0; i < b.size(); i++)
    // {
    //     cout<<b[i]<<" ";
    // }
    // cout<<endl;
 b.pop_back();
    // for (int  i = 0; i < b.size(); i++)
    // {
    //     cout<<b[i]<<" ";
    // }
    cout<<endl;
 int mx=*max_element(b.begin(),b.end());
int ct1= count(b.begin(), b.end(), mx);
//  cout<<mx;
  
    // cout<<endl;
 
    
    return ct1;
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
       cout<<t<<endl;  long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            a.push_back(k);
        }
        int d = minimumBeauty(a);
        // cout << d ;
        // cout << endl;

        ;
    }
    return 0;
}