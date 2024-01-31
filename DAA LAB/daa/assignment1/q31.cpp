#include <bits/stdc++.h>
using namespace std;

int main() {
	int m,n;
    cin>>m>>n;
    int a1[m];
    int a2[n];
    for(int i=0;i<m;i++){
        cin>>a1[i];
    }
    for(int i=0;i<n;i++){
        cin>>a2[i];
    }
    int k;
    cin>>k;
    int i=0,j=0;
    int count=0;
    while(i<m && j<n){
        if(a1[i]<a2[j]){
            count++;
            if(count==k){
                cout<<a1[i];
                break;
            }
            i++;
        }
        else{
            count++;
            if(count==k){
                cout<<a2[j];
                break;
            }
            j++;
        }
    }
    while(i<m){
        count++;
        if(count==k){
            cout<<a1[i];
            break;
        }
        i++;
    }
    while(j<n){
        count++;
        if(count==k){
            cout<<a2[j];
            break;
        }
        j++;
    }
	return 0;
}