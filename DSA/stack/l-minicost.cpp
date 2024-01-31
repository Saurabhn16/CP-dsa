#include <bits/stdc++.h>

using namespace std;

int findMinimumCost(string str)
{
    if (str.size() % 2 != 0)
    {
        return -1;
    }
   
 
    else
    {

        int ct = 0;
        stack<char> s;
        int a = 0, b = 0;
        for (int i = 0; i < str.size(); i++)
        {
            char m = str[i];
            if (str[i] == '{')
            {
                s.push(m);
            }
           if (str[i] == '}')
            {
                if (s.top() == '{')
                {
                    s.pop();
                }

                else
                {
                    s.push(m);
                }
            }
        }
    //     int z=s.size();
    //     for (int i = 0; i < z; i++)
    //     {
    //         if (s.top() == '{')
    //         {
    //             a++;
    //         }
    //         else
    //         {
    //             b++;
    //         }
    //         s.pop();
    //     }
    //      ct = (a + 1) / 2 + (b + 1) / 2;
    
         return ct;
}
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        // cout<<11;
        int k = findMinimumCost(s);
        cout << k << endl;
    }
    return 0;
}