#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        //  cout<<t -10004<<" ";
        int n, a, b;
        cin >> n >> a >> b;
        int s[n];
        //  cout<<n<<" "<<a<<r" "<<b<<"  :-";
        // int x = 0;
        // int c1 = 0, c2 = 0, c3 = 0;
        // cout << n << a << b<<endl;
        { int ct=1;
            s[0] = a;
            for (int i = n; i > 0; --i)
            {
                if (i == a || i == b)
                {
                }

                else
                {
                    s[ct] = i;
                    ct++;
                }
            }

            s[n - 1] = b;
        }
        {

            // for (int i = 0; i < n; i++)
            // {
            //     cout << s[i] << " ";
            // }
        }
    
        //  cout<<endl;

        int k = 0;
        int min = *min_element(s, s + n / 2);
         int mx = *max_element(s + n / 2, s+n);
        //  cout << min<<" "<<s[0] <<" "<<mx<< " " << s[n - 1];
        //   cout<<endl;
        {
            if (s[0] == min &&s[n - 1] == mx)
            {
                k = 1;
            }
           
        }
        if (k ==1)
        {
            for (int i = 0; i < n; i++)
            {
                cout << s[i] << " ";
            }
        }
        else
        {
            cout << "-1";
        }
        cout << endl;
    }

    return 0;
}