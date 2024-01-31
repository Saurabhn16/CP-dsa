#include <bits/stdc++.h>
using namespace std;

int main()
{
    int lng = 1e6;
    long long t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int l = n.size();
        if (n[l - 1] == '0' || n[l - 1] == '2' || n[l - 1] == '4' || n[l - 1] == '6' || n[l - 1] == '8')
        {
            cout << 0 << endl;
        } 
        else if (n[0] == '0' || n[0] == '2' || n[0] == '4' || n[0] == '6' || n[0] == '8')
        {
            cout<<1<<endl;
        }
        
       
        else 
        { int ct = 0;
            for (int i = 0; i < l; i++)
            {
                if (n[i] == '0' || n[i] == '2' || n[i] == '4' || n[i] == '6' || n[i] == '8')
                {
                    ct++;
                }
            }
            if (ct == 0)
            {
                cout << "-1" << endl;
            }
            else
            {
               cout<<2<<endl;
            }
        }
    }
}