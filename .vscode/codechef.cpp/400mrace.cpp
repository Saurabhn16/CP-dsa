#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        int mx = *min_element(a, a + 3);
        int j;

        for (int i = 0; i < 3; i++)
        {

            if (mx == a[i])
            {
                j = i;
            }
        }
        if (j==0)
        {
            cout<<"ALICE"<<endl;
        }   if (j==1)
        {
            cout<<"BOB"<<endl;
        }   if (j==2)
        {
            cout<<"CHARLIE"<<endl;
        }
        

        
    }
    return 0;
}