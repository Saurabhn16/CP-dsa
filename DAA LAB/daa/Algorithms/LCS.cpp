/* Bhavik Agarwal (bhavik_2001) */
#include<bits/stdc++.h>
using namespace std;

int lcs(int n, int m, string x, string y){

    vector<vector<int>> dp(n+1,vector<int>(m+1));

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++){
            if (i == 0 || j == 0){
                dp[i][j] = 0;
            }
            else if (x[i-1] == y[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    return dp[n][m];
}

int main(){
    int n,m;
    string x,y;

    cin >> n >> x;
    cin >> m >> y;

    cout << lcs(n,m,x,y) << endl;

}