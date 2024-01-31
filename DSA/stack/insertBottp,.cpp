void solve(stack<int> &inputStack ,int N)
{
    // base case

    if(inputStack.empty())
    {
        inputStack.push(N);
        return;
    }
    int num = inputStack.top();
    inputStack.pop(); 
    solve(inputStack,N);
    inputStack.push(num);
    }
stack<int> pushAtBottom(stack<int>& inputStack, int x) 
{  
     solve(inputStack ,x);
     return inputStack;
}
