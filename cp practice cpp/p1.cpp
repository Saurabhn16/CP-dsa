#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        
        long long ans = 0;
        for (int i = 0; i < N-1; i++) {
            for (int j = i+1; j < N; j++) {
              cout<<A[i]<<A[j];
                long long beauty = A[i] ^ A[j];
                ans += beauty;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
