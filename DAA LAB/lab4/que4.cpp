#include <bits/stdc++.h>
using namespace std;

string fs(string s)
{
    int countarray[256] = {0};
    for (int i = 0; i < s.length(); i++)
        countarray[s[i]]++;
    int size = 0;
    while (size < s.length())
    {
        int mxfr = 0;
        char mxC = 0;
        for (int i = 0; i < 256; i++)
        {
            if (mxfr < countarray[i])
            {
                mxfr = countarray[i];
                mxC = i;
            }
        }
        for (int i = 0; i < mxfr; i++)
        {
            s[i + size] = mxC;
        }
        size += mxfr;
        countarray[mxC] = 0;
    }
    return s;
}

int main()

{
    string s;
    cin >> s;
    cout << fs(s) << endl;
}
