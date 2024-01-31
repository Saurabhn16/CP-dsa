#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int maxi=0;
    for(int i=0;i<n;i++){
        maxi=max(maxi,a[i]);
    }
    int count[maxi+1]={0};
    for(int i=0;i<n;i++){
        count[a[i]]++;
    }
    int ans[m+n];
    int c=0;
    for(int i=0;i<m;i++){
        while(count[b[i]]>0){
            ans[c++]=b[i];
            count[b[i]]--;
        }
    }
    for(int i=0;i<maxi+1;i++){
        while(count[i]>0){
            ans[c++]=i;
            count[i]--;
        }
    }
    for(int i=0;i<c;i++){
        cout<<ans[i]<<" ";
    }
}


// time complexity-- O(maxi)