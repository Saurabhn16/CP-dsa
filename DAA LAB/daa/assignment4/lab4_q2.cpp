#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxi=0;
    for(int i=0;i<n;i++){
        maxi=max(maxi,a[i]);
    }
    int arr[maxi]={0};
    for(int i=0;i<n;i++){
        arr[a[i]]++;
    }
    int p=0;
    int total=n;
    for(int i=0;i<maxi;i++){
        int temp=arr[i];
        total-=p;
        arr[i]=total;
        p=temp;
    }
    int ans=1;
    for(int i=0;i<maxi;i++){
        if(arr[i]==i){
            ans=i;
        }
    }
    cout<<ans;
}