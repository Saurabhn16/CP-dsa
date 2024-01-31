#include <bits/stdc++.h>
using namespace std;

void generate(string s,string possible,vector<string>& ans,vector<string>& digits){
    if(s.empty()){
        ans.push_back(possible);
        return ;
    }
    char digit=s[0];
    // cout<<digit<<endl;
    // cout<<digits[5]<<endl;
    string message;
    message=digits[digit-48];
    // cout<<message<<endl;
    for(char x:message){
        generate(s.substr(1),possible+x,ans,digits);
    }
}

int main(){
vector<string>digits(10);
    digits[2]="abc";
    digits[3]="def";
    digits[4]="ghi";
    digits[5]="jkl";
    digits[6]="mno";
    digits[7]="pqrs";
    digits[8]="tuv";
    digits[9]="xyz";
    // cout<<digits[2].second[0];
    string s;
    cin>>s;
    // cout<<s<<endl;
    int n;
    n=s.size();
    vector<string>ans;
    generate(s,"",ans,digits);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}