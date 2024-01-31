#include <bits/stdc++.h>
using namespace std;
int main()
{
    string p ;
    getline(cin,p);
  map< string,int> m;
  int n=p.size();
   
   
     
    for (int  i = 0; i < n; i++)
    {
        
        if (p[i] != '{'&& p[i]!=','&&p[i]!= ' ' && p[i]!='}')
        {  string s;
  s=p[i];
  m[s]++;  
            
        }
        
    }int count=0;
     for (auto pr:m)
   {count++;
    // cout<<pr.first<<" "<<pr.second<<endl;;
   }
   cout<<count;

}