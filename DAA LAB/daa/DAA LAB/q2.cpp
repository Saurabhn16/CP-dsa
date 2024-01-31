#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
    cin>>n;
    vector<int>pi(n);
    for(int i=0;i<n;i++){
        cin>>pi[i];
    }
    vector<int>fi(n);
    for(int i=0;i<n;i++){
        cin>>fi[i];
    }
    int dp[n][n];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            dp[i][j]=0;
        }
    }
    int maxi=0;
    for(int i=0;i<n;i++){
        int points=0;
        for(int j=i;j<n;j++){
            dp[i][j]=pi[j];
            points=points+pi[j];
            j=j+fi[j];
        }
        maxi=max(maxi,points);
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<maxi<<endl;
	return 0;
}