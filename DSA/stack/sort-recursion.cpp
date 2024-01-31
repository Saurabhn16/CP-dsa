#include <bits/stdc++.h> 


void insertAtItsplace(stack<int> &inputStack, int N)
{
    // base case

    if (inputStack.empty())
    {
 inputStack.push(N);
        return ;
    }
    if (inputStack.top()<N)
    {
 inputStack.push(N);
        return ;
    }

    int num = inputStack.top();
    inputStack.pop();

    // recursive call
    insertAtItsplace(inputStack, N);
    inputStack.push(num);
}

void sortStack(stack<int> &inputStack)
{
    // base case
    if (inputStack.size() == 0)
    {
        return ;
    }

    int k = inputStack.top();
    inputStack.pop();

    // recursive call
    sortStack(inputStack);

    insertAtItsplace(inputStack, k);
}