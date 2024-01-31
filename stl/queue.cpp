#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int test;
    cin >> test;
    while (test--)
    {
        string s1, s2, s = "";
        cin >> s1 >> s2;
        int j, k, l, m;
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] == '1')
                j++;
            if (s1[i] == '0')
                k++;
            if (s2[i] == '1')
                l++;
            if (s2[i] == '0')
                m++;
        }

        long long a = min(j, m) + min(l, k);

        for (long long int i = 0; i < a; i++)
        {
            s += '1';
        }
        for (long long int i = a; i < s1.length(); i++)
        {
            s += '0';
        }
        cout << s << endl;
    }
    return 0;
}