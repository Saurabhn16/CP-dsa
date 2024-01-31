bool topos(int adj[], int V)
{
    int indegree[V] = {0};
    for (int i = 0; i < V; i++)
    {
        for (auto it : adj[i])
        {
            indegree[it]++;
        }
    }
    queue<int> q;
    for (int i = 0; i < V; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }
    vector<int> topo;
    while (!q.empty())
    {
        int sz = q.size();
        for (int i = 0; i < sz; i++)
        {
            int itr = q.front();
            topo.push_back(itr);
            q.pop();
            for (auto it : adj[itr])
            {
                indegree[it]--;
                if (indegree[it] == 0)
                {
                    q.push(it);
                }
            }
        }
    }
    if (topo.size() == V)
    {
        return true;
    }
    return false;
}
string findOrder(string dict[], int N, int K)
{
    int adj[N];
    for (int i = 0; i < N; i++)
    {
        string s1 = dict[i];
        string s2 = dict[i + 1];

        int len = min(s1.size(), s2.size());
        for (int prt = 0; ptr < len; ptr++)
        {
            {
                if (s1[ptr] != s2[ptr])
                {
                    adj[s1[ptr] - 'a'].push_back(s2[ptr] - 'a');
                    break;
                }
            }
        }
    }

    return topos(adj, N);
}