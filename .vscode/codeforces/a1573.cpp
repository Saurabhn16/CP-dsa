// C++ program to check for balanced brackets.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long sum = 0;

        for (int i = 0; i < n - 1; i++)
        {
            int num;
            char p = s[i];

            if (s[i] != '0')
            {
                num = s[i]-48;
                sum += num + 1;
            }
        }
        int num;
       
        num = s[n-1];
        sum += num-48;
        cout << sum<< endl;
    }
    return 0;
}
