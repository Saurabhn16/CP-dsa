#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int amount;
    cin>>amount;
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int i=0;
    int totalcoin=0;
    if(amount==0){
        cout<<"0"<<endl;
        return 0;
    }
    while(amount>0){
        if(amount<v[i]){
            if(i==n-1){
                break;
            }
            i++;
            continue;
        }
        if(amount>=v[i]){
            amount-=v[i];
            totalcoin++;
        }
    }
    
    if(amount==0){
        cout<<totalcoin;
        return 0;
    }
        cout<<"-1"<<endl;
    
	return 0;
}