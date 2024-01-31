#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int t;
    cin >> t;

    while (t--)
    {
        string n;
        cin >> n;
        int p = 0;
        int A = 0;
        int B = 0;
        int C = 0;
        string a = "A";
        string b = "B";
        string c = "C";
        for (int i = 0; i < n.size(); i++)
        {
            if (n[i] == 'A')
            {
                A++;
            }
            if (n[i] == 'B')
            {
                B++;
            }
            if (n[i] == 'C')
            {
                C++;
            }
        }
 int sum=A+C;
        if (B==sum)
        {
            p = 1;
        }


        if (p == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}