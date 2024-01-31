#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int id[n];
    int leave[n];
    for(int i=0;i<n;i++){
        cin>>id[i]>>leave[i];
    }
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,leave[i]);
    }
    int count[366];
    memset(count,0,sizeof(count));
    for(int i=0;i<n;i++){
        count[leave[i]]++;
    }
    for(int i=1;i<366;i++){
        count[i]=count[i]+count[i-1];
    }
    int ansL[n];
    int ansE[n];
    for(int i=n-1;i>=0;i--){
        int l=leave[i];
        int pos=count[i];
        count[i]--;
        ansE[pos-1]=id[i];
        ansL[pos-1]=leave[i];
    }
    for(int i=n-1;i>=0;i--){
        cout<<ansE[i]<<"--"<<ansL[i]<<endl;
    }

}

int main() {
	// your code goes here
	int t=1;
	// cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}