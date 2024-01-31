#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {

        long long n;
        cin >> n;

        if (n == 0)
            cout << 2 << " " << 14 << " " << 4 << " " << 6 << endl;
        else if (n == 1)
            cout << 1 << " " << 4 << " "
                 << "3"
                 << " " << 2 << endl;
      else if(n==2)
        cout<<"2 4 3 1"<<endl;
        else if(n==3)
        cout<<"8 3 2 1"<<endl;
        else
        {
            
            {

                long long a, b, c, d;
                int cnt = 0;
                long long j;

                c = n ^ 3;
                d = 3;
                a =  1;
                b =  2;

                cout << a << " " << b << " " << c << " " << d << endl;
            }

            // else
            //     cout << "-1" << endl;
        }
    }
    return 0;
}