#include<bits/stdc++.h>
using namespace std;

int max_occurrence(string S, string SS) {
    int count = 0;
    int pos = 0;
    while ((pos = S.find(SS, pos)) != string::npos) {
        count++;
        pos += SS.length();
    }
    return count > 0 ? count : -1;
}

int main() {
    string S = "ababc";
    string SS = "ab";
    int result = max_occurrence(S, SS);
    cout << result << endl;
    return 0;
}