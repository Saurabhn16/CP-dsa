#include <bits/stdc++.h>
using namespace std;

string largest(string s,int k){
    int n=s.size();
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=s[i]-48;
    }
    int l=0;
    int h=n-1;
    while(l<=h){
        if(v[l]!=v[h] && k){
            int maxi=max(v[l],v[h]);
            if(v[l]==maxi){
                v[h]=maxi;
            }
            else{
                v[l]=maxi;
            }
            k--;
        }
        l++;
        h--;
    }
    string ans="";
    for(int i=0;i<n;i++){
        ans+=to_string(v[i]);
    }
    return ans;
}

int main(){
    string s;
    cin>>s;
    // int n=s.size();
    int k;
    cin>>k;
    string ans=largest(s,k);
    cout<<ans<<endl;
}