void solve(stack<int> &inputStack, int N)
{
    // base case

    if (inputStack.empty())
    {
        inputStack.push(N);
        return;
    }
    int num = inputStack.top();
    inputStack.pop();
    solve(inputStack, N);
    inputStack.push(num);
}
stack<int> pushAtBottom(stack<int> &inputStack, int x)
{
   
       solve(inputStack, x);
    return inputStack ;
}

void reverseStack(stack<int> &inputStack)
{
    if (inputStack.size()==0)
    {
         return;
    }

    int k = inputStack.top();
    inputStack.pop();
    reverseStack(inputStack);
    pushAtBottom(inputStack, k);
}