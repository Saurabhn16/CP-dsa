#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==1||n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<ans;
}

//time complexity O(n)
//space complexity O(n)