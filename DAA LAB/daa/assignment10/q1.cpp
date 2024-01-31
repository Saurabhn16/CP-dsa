#include<bits/stdc++.h>
using namespace std;

int count(int n) {
    int c = 0;
    while (n) {
        c += n & 1;
        n >>= 1;
    }
    return c;
}

void solve(int n, int m, string s) {
  
    unordered_map<char, int> freq;
    for (char c : s) {
        if (freq.find(c) == freq.end()) {
            freq[c] = count(c);
        }
    }
    priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> pq;
    for (auto it : freq) {
        pq.push(make_pair(it.second, string(1, it.first)));
    }
    
  
    while (pq.size() > 1) {
        auto p1 = pq.top();
         pq.pop();
        auto p2 = pq.top();
         pq.pop();
        int count = p1.first + p2.first;
        string s = p1.second + p2.second;
        pq.push(make_pair(count, s));
    }
    
  
    unordered_map<char, string> codes;
    function<void(pair<int, string>, string)> traverse = [&](pair<int, string> node, string code) {
        if (node.second.size() == 1) {
            codes[node.second[0]] = code;
        } else {
            traverse(make_pair(node.first, node.second.substr(0, node.second.size() / 2)), code + "0");
            traverse(make_pair(node.first, node.second.substr(node.second.size() / 2)), code + "1");
        }
    };
    traverse(pq.top(), "");
    
    
    string encoded;
    for (char c : s) {
        encoded += codes[c];
    }
    
    
    int set_bits = 0;
    for (char bit : encoded) {
        set_bits += bit - '0';
    }
    
    
    cout << set_bits << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin>>n>>m;
        string s;
        cin >> s;
        solve(n, m, s);
    }
}