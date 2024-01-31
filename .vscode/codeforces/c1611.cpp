#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        // cout << endl;
        long long n;
        cin >> n;
        vector<int> a;
        vector<int> b;
        int b0 = n / 2;
        vector<int> c;
        int lng = 1e9 + 7;
        int c0 = n / 2 + 1;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            a.push_back(k);
            // cout << a[i] << " ";
        }

        int mx = *max_element(a.begin(), a.end());
        if (a[0] == mx || a[a.size() - 1] == mx)
        {

            for (int i = 0; i < a.size(); i++)
            { int m,j;
                if (a.size() % 2 == 0)
                {
                     m = a.size() / 2;
                     j = (a.size() / 2) - 1;
                }
                else {  m = a.size() / 2;
                     j = (a.size() / 2) + 1;
                     
                }
                {
                    if (a[m] < a[j])
                    {

                        c.push_back(a[m]);
                        a.erase(a.begin() + m);
                    }
                    else if (a[m] >= a[j])
                    {
                        b.push_back(a[j]);
                        a.erase(a.begin() + j);
                    }
                }
                cout << endl;

                cout << endl;
                cout << "b" << endl;
                for (int i = 0; i < b.size(); i++)
                {
                    cout << b[i] << " ";
                }
                cout << endl;
                cout << "c" << endl;
                for (int i = 0; i < c.size(); i++)
                {
                    cout << c[i] << " ";
                }
                cout << endl;

                cout << "A " << endl;
                for (int i = 0; i < a.size(); i++)
                {
                    cout << a[i] << " ";
                }
                cout << endl;
            }

            if (a.size() == 3)
            {
                // if (a[0] < a[1])
                {

                    if (a[1] < a[2])
                    {
                        c.push_back(a[2]);
                        b.push_back(a[1]);
                    }
                    else
                    {
                        b.push_back(a[2]);
                        c.push_back(a[1]);
                    }
                    b.push_back(a[0]);
                }
                // else
                // {
                //     b.push_back(a[1]);
                //     if (a[0] < a[2])
                //     {
                //     }
                //     else
                //     {
                //     }
                // }
            }

            else if (a.size() == 2)
            {

                if (a[1] < a[0])
                {
                }
                else
                {
                }
            }
            else if (a.size() == 1)
            {
                b.push_back(a[0]);
            }

            //  cout<<"ANS: -" <<endl;
            cout << endl;
            cout << "b" << endl;
            for (int i = 0; i < b.size(); i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
            cout << "c" << endl;
            for (int i = 0; i < c.size(); i++)
            {
                cout << c[i] << " ";
            }
            cout << endl;

            cout << "A " << endl;
            for (int i = 0; i < a.size(); i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
            reverse(c.begin(), c.end());
            for (int i = 0; i < c.size(); i++)
            {
                cout << c[i] << " ";
            }

            for (int i = 0; i < b.size(); i++)
            {
                cout << b[i] << " ";
            }

            cout << endl;
        }
        else
        {

            cout << "-1" << endl;
        }
        // cout<<endl;
    }
    return 0;
}