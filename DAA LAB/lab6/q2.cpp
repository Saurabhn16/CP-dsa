#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int find(int x, vector<int>& prt) {
    if (prt[x] != x) {
        prt[x] = find(prt[x], prt);
    }
    return prt[x];
}

int minimumCost(int N, vector<vector<int>>& cnn) {
    sort(cnn.begin(), cnn.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[2] < b[2];
    });

    vector<int> prt(N+1);
    for (int i = 1; i <= N; i++) {
        prt[i] = i;
    }

    vector<vector<int>> mst;
    int cost = 0;
    for (const auto& connection : cnn) {
        int u = connection[0], v = connection[1], w = connection[2];
        int pu = find(u, prt), pv = find(v, prt);
        if (pu != pv) {
            mst.push_back(connection);
            cost += w;
            prt[pu] = pv;
        }
    }

    if (mst.size() < N-1) {
        return -1;
    }

    return cost;
}

int main() {
    int N = 3;
    vector<vector<int>> cnn = {{1, 2, 5}, {1,3,6},{ 2,3,1,}};

    int min_cost = minimumCost(N, cnn);
    if (min_cost == -1) {
        cout << "-1" << endl;
    } else {
        cout << min_cost << endl;
    }

    return 0;
}