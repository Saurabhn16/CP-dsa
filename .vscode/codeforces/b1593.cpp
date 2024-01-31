 #include<bits/stdc++.h>
  using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        // stack<char> c;
        int ct = 0;
        for (int i = s.size() - 1; i > 0; i--)
        {
            if (s[i] == '0')
            {
                ct = i;
                // char m =s[i];
                // c.push(m);
            }
            {for (int   = 0; i < count; i++)
            {
                /* code */
            }
            
                if (s[i] == '5' || s[i] == '0')
                {
                    break;
                }

                else
                {
                    ct++;
                }
            }
        }

         cout << ct << endl;
    }

    return 0;
}
