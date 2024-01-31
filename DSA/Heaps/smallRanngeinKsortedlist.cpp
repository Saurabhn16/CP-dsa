#include <bits/stdc++.h>
class node
{
public:
    int data;
    int row;
    int col;
    node(int data, int r, int c)
    {
        this->data = data;
        row = r;
        col = c;
    }
};
class compare
{
public:
    bool operator()(node *a, node *b) { return a->data > b->data; }
};
int kSorted(vector<vector<int>> &a, int k, int n)
{

    int mini = INT_MAX,
        maxi = INT_MIN;
    priority_queue<node *, vector<node *>, compare> minHeap;
    for (int i = 0; i < k; i++)
    {
        int element = a[i][0];
        mini = min(mini, element);
        maxi = max(maxi, element);
        minHeap.push(new node(element, i, 0));
    }
    int start = mini, end = maxi;
    // process ranges
    while (!minHeap.empty())
    {
        // mini fetch
        node *tmp = minHeap.top();
        minHeap.pop();

        mini = tmp->data;
        // range or answer updation
        if (maxi - mini < end - start)
        {
            start = mini;
            end = maxi;
        }
        // next element exist
        if (tmp->col + 1 < n)
        {
            maxi = max(maxi, a[tmp->row][tmp->col + 1]);
            minHeap.push(new node(a[tmp->row][tmp->col + 1], tmp->row, tmp->col + 1));
        }
        else
        {
            // next element  not exist

            break;
        }
    }
    return (end - start + 1);
}