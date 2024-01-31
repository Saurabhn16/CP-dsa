#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a;
        cin >> a;
        // cout << a << " " << endl;
        long long i = 1;
        long long j = 1;
        long long c = 0;
      long long sum = 0;
        {
            for (i = 0; i < sqrt(a); i++)
            {
                if ((i  < sqrt(a)) && sqrt(a) <= ((i+1)))

                {
                    c = i;
                }
            }
            c=c+1;
            long long d = ((c * c) - c + 1);
            //  cout<<a<<"=";
            if (a >=d)
            {
                // cout << "<-" << endl;
                cout << c  << " " <<c- (a-d) << endl;
            }
            else
            {
                // cout << "->" << endl;
                cout <<c-( d-a) << " " << c  << endl;
            }

            // cout <<a<<"=a  c="<< c+1 <<" "<<sum<< " " << endl;
        }
    }
    return 0;
}