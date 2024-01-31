#include <bits/stdc++.h>
using namespace std;

void algo1(int a[],int n){
    if(n==2&&a[0]>a[1]){
        swap(a[0],a[1]);
        return ;
    }
    else if(n>2){
        int m=(2*n)/3;
        if((2*n)%3!=0){
            m++;
        }
        algo1(a,m);
        algo1(a+n-m,m);
        algo1(a,m);
    }
    return ;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    algo1(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

//time complexity-->O(n^3)
//space complexity-->O(n)+O(logn)