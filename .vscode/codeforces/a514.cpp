#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = '9';
    int o = '0';

    //   cout<<n<< o;
    if (s[0]>=5&&s[0]<'9')
    {
           s[0] = 57 - (s[0] - 48);
    }
    
    for (int i =1; i < s.size(); i++)
    {

 if (s[i] >= '5')
        {
            int k = s[i];
            s[i] = 57 - (s[i] - 48);
        }
    }
    cout << s;
    return 0;
}