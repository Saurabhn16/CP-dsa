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
        cin.ignore();

        string s;

        getline(cin, s);
        string t = "";
        vector<char> a;
        vector<char> b;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
            {
                t = t + s[i];
                a.push_back(s[i]);
                // cout << s[i];
            }
        }
        // cout << endl;
        int idx = 0;
        for (int i = 0; i < a.size(); i++)
        {

            if (a[i] != a[i + 1] && (i % 2 == 1))
            {
                {
                    idx = i;
                    break;
                }
            }
        }
        // cout << endl;
        //  cout << idx << << endl;
        int k = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (idx == i)
            {
                if (k == a.size() - 1)
                {
                    b.push_back(a[k]);
                    b.push_back(a[k]);
                    b.push_back(a[k]);
                }

                else
                {
                    b.push_back(a[k]);
                    b.push_back(a[k]);
                    b.push_back(a[k + 1]);
                }
                k++;
            }
            else
            {
                b.push_back(a[k]);
                k++;
            }
        }
        //  cout << b.size();
      
        {
           
            for (int i = 0; i < b.size(); i++)
             { 
                if (i%2!=1)
            {
               cout << b[i];
            }
             

               
            }
          
          {   cout<<a[a.size()-1]<<endl;
     
        
              
            }// for (int  i = 0; i < n-2 -b.size(); i++)
            // {
                   
            // }
            
        }
        // else{
        //         for (int i = 0; i < b.size(); i = i + 2)
        //         {

        //             cout << b[i];
        //         }}
        
        // cout << t << endl;
    }
    return 0;
}