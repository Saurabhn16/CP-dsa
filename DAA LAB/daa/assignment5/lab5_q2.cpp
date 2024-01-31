#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;

    vector<string>v;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    int k;
    cin>>k;
    map<string,int>m;
    for(int i=0;i<n;i++){
        m[v[i]]++;
    }
    
    vector< pair <int,string> > ve;
    for(auto& x:m){
        
        ve.push_back({-1*x.second,x.first});
    }
    sort(ve.begin(),ve.end());
    for(int i=0;i<k;i++){
        cout<<ve[i].second<<endl;
    }

}

int main() {
	int t=1;
	while(t--){
	    solve();
	}
	return 0;
}


//time complexity--O(nlong)
//space complexity--O(n)