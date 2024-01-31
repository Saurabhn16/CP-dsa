#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int scs_dp(string X, string Y) {
    int m = X.length();
    int n = Y.length();

    
    int dp[m + 1][n + 1];
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            }
        }
    }

    
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (X[i - 1] == Y[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }


    int lcs_len = dp[m][n];
    return m + n - lcs_len;
}

int main() {
    string X = "ABCBDAB";
    string Y = "BDCABA";
    int result = scs_dp(X, Y);
    cout << "Length of shortest common supersequence: " << result << endl;
    return 0;
}
