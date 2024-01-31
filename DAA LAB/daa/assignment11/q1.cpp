#include <bits/stdc++.h>
using namespace std;

int subsetSum(vector<int>coins, int n, int sum) {
    int dp[n + 1][sum + 1];

    // Base cases
    for (int i = 0; i <= n; i++)
        dp[i][0] = 1;

    for (int j = 1; j <= sum; j++)
        dp[0][j] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            dp[i][j] = dp[i - 1][j];
            if (coins[i - 1] <= j)
                dp[i][j] |= dp[i - 1][j - coins[i - 1]];
        }
    }

    if (dp[n][sum]) {
        return dp[n][sum];
    } else {
        return -1;
    }
}

int main() {
    
    int n;
    cin>>n;
    vector<int>coins(n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=coins[i];
    }
    if (sum % 2 != 0) {
        cout << "subset creation failed";
        return 0;
    }
    sum /= 2;
    if(subsetSum(coins, n, sum) !=-1)
    cout << subsetSum(coins, n, sum) << endl;
    else{
        cout<<"subset creation failed"<<endl;
    }
    return 0;
}
