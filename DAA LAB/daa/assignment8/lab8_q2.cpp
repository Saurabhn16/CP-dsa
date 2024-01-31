#include <bits/stdc++.h>

using namespace std;

struct Node
{
    char symbol;
    int frequency;
    Node *left;
    Node *right;
    Node(char symbol, int frequency)
    {
        this->symbol = symbol;
        this->frequency = frequency;
        this->left = NULL;
        this->right = NULL;
    }
    Node(Node *left, Node *right)
    {
        this->symbol = '\0';
        this->frequency = left->frequency + right->frequency;
        this->left = left;
        this->right = right;
    }
};
struct CompareNodes
{
    bool operator()(Node *left, Node *right)
    {
        return left->frequency < right->frequency;
    }
};
Node *build(map<char, int> freq)
{
    priority_queue<Node *, vector<Node *>, CompareNodes> pq;
    for (auto it = freq.begin(); it != freq.end(); ++it)
    {
        pq.push(new Node(it->first, it->second));
    }
    while (pq.size() > 1)
    {
        Node *left = pq.top();
        pq.pop();
        Node *right = pq.top();
        pq.pop();
        pq.push(new Node(left, right));
    }
    return pq.top();
}

void traverse(Node *node, string Sequence, map<char, string> &c)
{
    if (node->symbol != '\0')
    {
        c[node->symbol] = Sequence;
    }
    else
    {
        traverse(node->left, Sequence + "0", c);
        traverse(node->right, Sequence + "1", c);
    }
}

int main()
{
    int n;
    map<char, int> freq;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char c;
        int m;
        cin >> c >> m;
        freq[c] = m;
    }

    Node *root = build(freq);
    map<char, string> sequence;
    traverse(root, "", sequence);
    for (auto it = sequence.begin(); it != sequence.end(); ++it)
    {
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}

// time complexity-- O(nlogn)