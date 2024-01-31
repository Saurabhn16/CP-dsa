#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=1;
    while(n>1){
        ans=ans*n;
        n=n-1;
    }
    cout<<ans;
}

//time complexity O(n)
//space complexity O(1)