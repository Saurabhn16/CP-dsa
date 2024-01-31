#include <bits/stdc++.h>

int getKthLargest(vector<int> &arr, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j <n; j++)
        {
            sum += arr[i];
            if (pq.size()< k)
            {
                pq.push(sum);
            }
            else
            {
                if (sum > mini.top())
                {
                    mini.pop();
                    mini.push(sum);
                }
            }
          
        }
    }
    return mini.top();
}