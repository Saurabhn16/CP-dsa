#include <iostream>
#include <vector>
using namespace std;

vector<int> compute_prefix_function(string pattern) {
    int n = pattern.length();
    vector<int> pi(n);
    pi[0] = 0;
    int j = 0;
    for (int i = 1; i < n; i++) {
        while (j > 0 && pattern[i] != pattern[j]) {
            j = pi[j-1];
        }
        if (pattern[i] == pattern[j]) {
            j++;
        }
        pi[i] = j;
    }
    return pi;
}

void find_pattern(string text, string pattern) {
    vector<int> pi = compute_prefix_function(pattern);
    int n = text.length();
    int m = pattern.length();
    int j = 0;
    int count = 0;
    vector<int> positions;
    for (int i = 0; i < n; i++) {
        while (j > 0 && text[i] != pattern[j]) {
            j = pi[j-1];
        }
        if (text[i] == pattern[j]) {
            j++;
        }
        if (j == m) {
            count++;
            positions.push_back(i-m+1);
            j = pi[j-1];
        }
    }
    cout << "Number of occurrences: " << count << endl;
    cout << "Starting positions: ";
    for (int i = 0; i < positions.size(); i++) {
        cout << positions[i] << " ";
    }
}

int main() {

    string text;
    cin>>text;

    string pattern;
    cin>>pattern;
    find_pattern(text, pattern);
    return 0;
}
