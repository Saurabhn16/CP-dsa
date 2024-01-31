
class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<vector<pair<int, double>>> g(n);
        for (int i = 0; i < edges.size(); i++) {
            g[edges[i][0]].push_back({edges[i][1], succProb[i]});
            g[edges[i][1]].push_back({edges[i][0], succProb[i]});
        }
        
        priority_queue<pair<double, int>> pq;
        pq.push({1.0, start});
        
        vector<double> prob(n, 0);
        prob[start] = 1.0;
        
        while (!pq.empty()) {
            auto curr = pq.top();
            pq.pop();
            
            if (curr.second == end) {
                return curr.first;
            }
            
            for (auto adj : g[curr.second]) {
                if (prob[adj.first] < curr.first * adj.second) {
                    prob[adj.first] = curr.first * adj.second;
                    pq.push({prob[adj.first], adj.first});
                }
            }
        }
        
        return 0.0;
    }
};
