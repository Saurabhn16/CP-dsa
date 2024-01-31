#include <bits/stdc++.h>
void solve(stack<int> &inputStack, int count, int N)
{
    // base case

    if (count == N / 2)
    {
        inputStack.pop();
        return;
    }
    int num = inputStack.top();
    inputStack.pop();
    // recursive Call
    solve(inputStack, count + 1, size);
}
void deleteMiddle(stack<int> &inputStack, int N)
{
    int count = 0;
    solve(inputStack, count, N);
}
