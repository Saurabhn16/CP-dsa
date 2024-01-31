bool solve(string a, string b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}
int wordLadderLength(string startWord, string targetWord, vector<string> &wordList)
{
    int n = wordList.size();
    vector<string> adj[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (solve(wordList[i] == wordList[j]))
            {
                adj[wordList[i]].push_back(wordList[j]);
                adj[wordList[j]].push_back(wordList[i]);
            }
        }
    }
    vector<pair<string,int>>level(n,0);
    queue<string> q;
    q.push(startWord);
    while (!q.empty())
    {

        auto temp = q.top();
        q.pop();
        for (auto it : adj[temp])
        {
            if (level[it].second + 1 < level[temp].second)
            {
                level[temp] = level[it] + 1;
                q.push(it);
            }
        }
    }
}