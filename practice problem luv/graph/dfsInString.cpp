#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string dfs(string vertex, unordered_map<string, vector<string>>& g, unordered_map<string, bool>& vis) {
        vis[vertex] = true;
        if (g[vertex].empty()) {
            return vertex;
        }

        for (string child : g[vertex]) {
            if (vis[child])
                continue;

            if (g[child].empty()) {
                return child;
            }

            string result = dfs(child, g, vis);
            if (!result.empty()) {
                return result;
            }
        }
        return "";  // No destination city found
    }

    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, vector<string>> g;
        unordered_map<string, bool> vis;

        for (auto x : paths) {
            g[x[0]].push_back(x[1]);
            vis[x[0]] = false;
            vis[x[1]] = false;
        }

        string destination;
        for (auto x : paths) {
            if (!vis[x[0]]) {
                destination = dfs(x[0], g, vis);
                if (!destination.empty()) {
                    break;
                }
            }
        }

        return destination;
    }
};
