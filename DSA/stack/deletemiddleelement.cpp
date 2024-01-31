#include <bits/stdc++.h>
void deleteMiddle(stack<int> &inputStack, int N)
{
    stack<int> k;

   
    {
        for (int i = 0; i <= N / 2; i++)
        {
            int m = s.top();
            k.push(m);
            s.pop();
        }

        s.pop();
        for (int i = 0; i < N / 2; i++)
        {
            int m = k.top();
            s.push(m);
            k.pop();
        }
    }
}
