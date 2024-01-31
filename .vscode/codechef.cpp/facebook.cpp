#include <bits/stdc++.h>
using namespace std;
int hsh[10000000];
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
        int ct = 0;
        vector<int> a;
        int cmt = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                ct++;
            }
            else
            {
                a.push_back(ct);

                ct = 0;
                cmt++;
            }
            if (i == n - 1)
            {
                a.push_back(ct);
            }
        }

        int temp = a[0];
        int mx = 0;
        int max = *max_element(a.begin(), a.end());
        if (s[0] == '1')
        {
            int max = *max_element(a.begin(), a.end());
    
            if (a[0] == max)
            {
                a[0] = 0;
                int max = *max_element(a.begin(), a.end());
                mx =  max+temp;
            }
            else {mx=max+temp;}

        }
else { 
     mx= max;
}
        cout << mx << endl;
    }
}