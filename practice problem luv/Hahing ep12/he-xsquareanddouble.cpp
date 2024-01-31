#include <bits/stdc++.h>
using namespace std;
long long  hsh[26];
int main()
{
    int t;
    cin >> t;
    while (t--)

    { 
    
        string s;

        cin >> s;
        int bol = 0;
         long long int n = s.length();


        
        for (long long int i = 0; i < n; i++)
        {

            hsh[s[i]]++;
        }

        for (char i = 'a'; i < 'z'; i++)
        {
            if (hsh[i] >= 2)
            {
                bol = 1;
                //  cout<<i; 
               hsh[i]=0;
                // cout<<hsh[i];
            }
            else
            {
               hsh[i]=0;
            }
            
           
        }

        if (bol == 1)
        {
            cout << "Yes" << endl;
        }

        else
        {
            cout << "No" << endl;
        }
  
    }
}