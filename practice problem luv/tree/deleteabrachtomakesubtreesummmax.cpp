// Given an undirected tree with N nodes labeled from 1 to N.
// Each node has a certain weight assigned to it given by an integer array A of size N.
// You need to delete an edge in such a way that the Product between the sum of weights of nodes in one subtree with the sum of weights of nodes in other subtree is maximized.
// Return this maximum possible product modulo 109 + 7.

const int M = 1e9 + 7;

void dfs(int vertex, int par, vector<int> g[], vector<int>& subtree_sum, vector<int>& val)
{
    subtree_sum[vertex] += val[vertex-1];
    for (int child : g[vertex])
    {
        if (child == par)
            continue;
      

        dfs(child, vertex, g, subtree_sum, val);
        subtree_sum[vertex] += subtree_sum[child];
    }

}

int Solution::deleteEdge(vector<int>& A, vector<vector<int>>& B)
{
    vector<int> g[A.size() + 1];
    vector<int> subtree_sum(A.size() + 1, 0);
   
    for (auto edge : B)
    {
        g[edge[0]].push_back(edge[1]);
        g[edge[1]].push_back(edge[0]);
    }

    dfs(1, 0, g, subtree_sum, A);

    long long ans = 0;
    for (int i = 2; i <= A.size(); ++i)
    {
        int part1 = subtree_sum[i];
        int part2 = subtree_sum[1] - part1;
        ans = max(ans, (part1 * 1LL * part2) % M);
    }

    return ans;
}
