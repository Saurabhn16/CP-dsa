#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;

        int a[26] = {0}; // Array to store the count of lowercase letters (initialized to 0)
        int b[26] = {0}; // Array to store the count of uppercase letters (initialized to 0)
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if ((s[i] >= 'a') && (s[i] <= 'z'))
            {
                a[s[i] - 'a']++;
            }
            if ((s[i] >= 'A') && (s[i] <= 'Z'))
            {
                b[s[i] - 'A']++;
            }
        }

        for (int i = 0; i < 26; i++)
        {
            if (a[i] || b[i])
            {
                cout << char('a' + i) << " " << a[i] << " " << char('A' + i) << " " << b[i] << endl;
                if (a[i] == b[i])
                {
                    sum += a[i];
                }
                else
                {
                    int l = abs(a[i] - b[i]) ;
                    if (l > 2)
                    {
                        if (a[i] > b[i])
                        {
                            sum += b[i];
                            a[i] -= b[i];
                            while (k > 0 && a[i] > 2)
                            {
                                if (a[i] > 2)
                                {
                                    sum += 1;
                                    a[i]-=2;
                                    k--;
                                }
                            }
                        }
                        else
                        {
                            sum += a[i];
                            b[i] -= a[i];
                              while (k > 0 && b[i] > 2)
                            {
                                if (b[i] > 2)
                                {
                                    sum += 1;
                                    b[i]-=2;
                                    k--;
                                }
                            }
                        }
                    }
                    else{
                        sum+=l;
                    }
                }
            }
        }cout<<endl;
        cout <<sum<< endl;
    }

    return 0;
}
