#include<bits/stdc++.h>
using namespace std;

int ans=INT_MIN;

void rec(int index,int n, vector<int> p,vector<int> f , vector<int> &ds){
    if(index>=n){
        int temp=0;
        for(int i=0;i<ds.size();i++){
            temp+=ds[i];
        }
        ans=max(ans,temp);
        return;
    }
    else{   
        ds.push_back(p[index]);
        rec(index+1+f[index],n,p,f,ds);
        ds.pop_back();
        rec(index+1,n,p,f,ds);
    }
}

int main() {
	int n;
    cin>>n;
    vector<int> p(n);
    cout<<"Enter the points:";
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    vector<int> f(n);
    cout<<"Enter the frustrating questions:";
    for(int i=0;i<n;i++){
        cin>>f[i];
    }
    vector<int> ds;
    rec(0,n,p,f,ds);
    cout<<"By recursion ans will be "<<ans<<endl;
    int dp[n+1][n+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            dp[i][j]=0;
        }
    }

    int maxi=0;
    for(int i=0;i<n;i++){
        int points=0;
        for(int j=i;j<n;j++){
            dp[i][j]=p[i];
            points=points+p[j];
            j=j+f[j];
            // cout<<points<<endl;
        }
        maxi=max(maxi,points);
    }
    cout<<"By dp ans will be "<<maxi<<endl;
	return 0;
}
