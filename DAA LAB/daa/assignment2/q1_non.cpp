#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=rand()%100000;
    }
    int item=rand()%100000;
    sort(a,a+n);
    int l=0;
    int r=n;
    bool flag=false;
    while(r-l>1){
        int middle=(l+r)/2;
        if(a[middle]==item){
            flag=true;
            break;
        }
        else if(a[middle]<item){
            l=middle;
        }
        else if(a[middle]>item){
            r=middle;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<item<<endl;
    if(flag==true){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}

// time complexity O(logn)
// space O(n)