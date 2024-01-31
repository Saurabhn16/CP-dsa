#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin >> m;
    while (m--)
    {

        int n;
        cin >> n;
        string s;
        cin >> s;
        long long int a[n];
        char cAlphabet[] = {'a', 'b', 'c', 'd', 'e', 'f',
                            'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
                            'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

        stack<char> u;

        int lng = 0;
        for (long long int i = 0; i < n; i++)
        {
            u.push(s[i]);
            // cout << s[i];
        }

        string ans = "";

        while (!u.empty())
        {
            string fi = "";
            // cout << u.top()<<" " <<count<<"   ";
            if (u.top() == '0')
            {

                u.pop();
                fi = fi + u.top();
                // cout <<"k=" <<k;
                u.pop();
                fi = fi + u.top();
                //  cout <<"m="<< m;

                reverse(fi.begin(), fi.end());
                //  cout << fi[i];
                u.pop();
            }
            else
            {
                fi = fi + u.top();
                // cout << f;

                //   cout << fi[i];
                u.pop(); 
            }
            // cout<<"fi="<<fi<<endl; 
            int num=stoi(fi);
            ans = ans + cAlphabet[num-1];
           

        }
 reverse(ans.begin(),ans.end());
        cout << ans << endl;
    }
}
