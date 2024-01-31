#include <bits/stdc++.h>
using namespace std;
void solve(){
    vector<vector<int>>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        vector<int>temp;
        for(int j=0;j<2;j++){
            int a;
            cin>>a;
            temp.push_back(a);
        }
        v.push_back(temp);
    }
    int size;
    cin>>size;
    for(int i=0;i<n;i++){
        swap(v[i][0],v[i][1]);
    }
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=n-1;i>=0;i--){
        if(v[i][1]<=size){
            size-=v[i][1];
            ans+=(v[i][0]*v[i][1]);
        }
        else if(size!=0 && v[i][1]>size){
            ans+=(size*v[i][0]);
            size=0;
            break;
        }
    }
    cout<<ans;
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