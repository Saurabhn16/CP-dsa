#include <bits/stdc++.h>
using namespace std;
bool findRedundantBrackets(string &s)
{
    
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='+' ||s[i]=='-' || s[i]=='/' || s[i]=='*'){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            char r=st.top();
            if(r=='('){
                return true;
            }
            else{
                while(st.top()!='('){
                   // r=st.top();
                    st.pop();
                }
                st.pop();
            }
        }
    }

    if(st.empty()){
        return false;
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
        if (findRedundantBrackets(s))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}