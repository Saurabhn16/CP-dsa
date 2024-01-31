
void insertAtBottom(stack<int> &inputStack, int N)
{
    // base case

    if (inputStack.empty())
    {
        inputStack.push(N);
        return;
    }
    int num = inputStack.top();
    inputStack.pop();
    //recursive call
    insertAtBottom(inputStack, N);
    inputStack.push(num);
}


void reverseStack(stack<int> &inputStack)
{ 
    //base case 
    if (inputStack.size()==0)
    {
         return;
    }

    int k = inputStack.top();
    inputStack.pop();

//recursive call 
    reverseStack(inputStack);

    insertAtBottom(inputStack, k);
}