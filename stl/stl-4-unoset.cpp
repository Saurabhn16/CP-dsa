#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<string> s;
    //agr tumko order matter nhi kar rha hai 
    //bs dekhn hai ki element hai ki nhi so tumne usmei
    //use karna chahie unordererd map iske time complexity hote O(1)

    //inserting
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);
    }
    int q;
    cin>>q;
    while(q--){
        string str;
        cin>>str;
        if(s.find(str)==s.end()){
            cout<<"NO\n"<<endl;
        }
        else{
            cout<<"YES\n"<<endl;
        }
    }
}