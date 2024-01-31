#include <bits/stdc++.h>

using namespace std;

int findMinimumCost(string str)
{
    int ct = 0;
    stack<char> s;
    // cout << ct;
    if (str.size() % 2 != 0)
    {
        // cout << "-1" << endl;
        return -1;
    }

    else
    {
        
    

        for (int i = 0; i < str.size(); i++)
        {
            char k = str[i];
            if (s.size() == 0)
            {
                if (str[i] == '{')
                {
                    s.push(k);
                }

               if (str[i] == '}')
                {  char m='{';
                    s.push(m);
                    ct++;
                    // cout<<ct<<" ";
                }
            }
            else
            {

                if (str[i] == '{')
                {

                    s.push(k);
                }

                if (str[i] == '}')
                {

                   s.pop();
                  
                }
            }
        }
    }
    int k = s.size();
       
      ct =ct+ s.size()/2;
    
    
  
    //  for (int  i = 0; i < k; i++)
    //  {
    //     char m=s.top();
    //      cout<<m<<" ";
    //      s.pop();
    //  }

    // if (ct > 1)
    // {
    //     ct = ct / 2;
    // }

    return ct;
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k = findMinimumCost(s);
        cout << k << endl;
    }
    return 0;
}