#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<char,int> &a,pair<char,int> &b){
    return a.second<b.second;
}

int main(void){
    unordered_map<char,int> mp;
    string str;
    cin>>str;
    vector<pair<char,int>> res;
    for(int i=0;i<str.length();++i){
        mp[str[i]]++;
    }
    for(auto it:mp){
        res.push_back(it);
    }
    sort(res.begin(),res.end(),cmp);
    vector<char> res1;
    for(auto it:res){
        while(it.second--){
            // cout<<it.first;
            res1.push_back(it.first);
        }
    }
    for(int i=res1.size()-1;i>=0;--i){
        cout<<res1[i];
    }
}