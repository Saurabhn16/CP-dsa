#include <bits/stdc++.h>
 using namespace std;
int main() {
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n ;

        vector<string> a(n);
        vector<string> b(n);
        vector<int > c(n);
        vector<string>d;
        int ct=0;
        for(int i=0; i<n; i++)
        {   cin>>a[i];
            cin>>b[i];
            if( b[i]=="yes")
            {   ct++;
                cin>>c[i];
                ct+=c[i];
                if(c[i]>0) {
                    for(int i=0; i<c[i]; i++)
                    {   string k;

                        cin>>k;
                        d.push_back(k);

                    }
                }
            }
        }
        cout<<ct<<endl;
    }
    return 0;
}
