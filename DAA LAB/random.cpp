#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int n, x; cin>>n>>x;
    int weight[n];
    for (int i = 0; i < n; i++)
        cin>>weight[i];
    pair<int, int> dp[1<<n];
    dp[0] = {0, x+1};
    for (int s = 1; s < (1<<n); s++) {
        dp[s] = {25, 0};
        for (int i = 0; i < n; i++) {
            if (s>>i&1){
                auto [c, w] = dp[s^(1<<i)];
                if (w + weight[i] > x) {
                    c++;
                    w = min(weight[i], w);
                }
                else
                    w += weight[i];
                dp[s] = min(dp[s], {c, w});
            }
        }
    }
    cout<<dp[(1<<n)-1].first;
    return 0;
}
