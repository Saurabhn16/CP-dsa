#include <bits/stdc++.h>
using namespace std;
// void print(set<string, int> &s)
// {
//     for (auto it : s)
//     {
//         cout << it.lower.bound << it.higher_bound << endl;
//     }
// }
int main()
{

    string p ;
    getline(cin,p);
map<char,int>s;

    int n=p.size();
    cout<<n;
    for (int  i = 0; i < n; i++)
    {
        
        if (p[i] != '{'&& p[i]!=','&&p[i]!= ' ' && p[i]!='}')
        { 
            char o=p[i];
            s[o]++;    
            
        }
        
    }

    for (auto pr:s)
   {
    cout<<pr.first<<" "<<pr.second<<endl;;
   }

   
}