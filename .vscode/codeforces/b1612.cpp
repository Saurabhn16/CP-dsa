#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        //  cout<<t -10004<<" ";
        long long n, a, b;
        cin >> n >> a >> b;
        //  cout<<n<<" "<<a<<" "<<b<<"  :-";
        int x = 0;
        int c1 = 0, c2 = 0, c3 = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i != a && i != b)
            {
                if (i > a)
                {
                    c1++;
                }
                if (i < b)
                {
                    c2++;
                }
                if ((i > a && i < b))
                {
                    c3++;
                }
            }
        }
     
        // {
        //     x = 1;
        // }
        //    cout<<n<<a<<b<<" ";

        if ((a > n/2 ))
        {
           
            if ( b==n/2)
            {
                cout << a << " ";
                for (int i = n; i > 0; --i)
                {
                    if (i == a || i == b)
                    {
                    }

                    else
                    {
                        cout << i << " ";
                    }
                }
              cout << b << endl;
            }
            else 
            {
                cout << "-1" << endl;
            }
             
        }

        if ((a <=n/2))
         {
              
            //   cout<<c1<<" "<<c2 <<" "<<c3 <<" :-";
              if (b<=n/2)
            {
                cout << "-1" << endl;
            }
            else 
            {
                cout << a << " ";
                for (int i = n; i > 0; --i)
                {
                    if (i == a || i == b)
                    {
                        /* code */
                    }

                    else
                    {
                        cout << i << " ";
                    }
                }
                cout << b << endl;
            }
        }
    }
    return 0;
}