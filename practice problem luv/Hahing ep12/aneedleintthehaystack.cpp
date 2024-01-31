#include <bits/stdc++.h>
using namespace std;

long long hsh2[26];
int main()
{
    long long  t;
    cin >> t;
    while (t--)

    {
 int n=1e7;
        string p, s;

        cin >> p ;
        cin>>s;
        long long  pl = p.size();
        long long  sl = s.size();

        for (long long int i = 0; i < pl; i++)
        {
            hsh1[p[i]]=(hsh1[p[i]]+1)%n;
        }
        for (long long int i = 0; i < pl; i++)
        {
          cout<<p[i]<<" "<<hsh1[p[i]]<<endl;
        }
        
        // long long  count = 1;
        // for (long long  i = 0; i < pl; i++)
        // {

        //     if ((hsh1[p[i]] > hsh2[p[i]]))
        //     {
        //         count = 0;
        //         break;
        //     }

          
        // }
        //   for (char i = 'a'; i <='z'; i++)
        // {
        
        //     hsh1[i] = 0;
        //     hsh2[i] = 0;
        // }
        // if (count == 1)
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
    }
}