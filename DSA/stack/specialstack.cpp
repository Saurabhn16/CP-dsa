#include <stack>
class SpecialStack
{
    // Define the data members.
    stack<int> s;
    int mini;
    /*----------------- Public Functions of SpecialStack -----------------*/
public:
    void push(int data)
    {
        // Implement the push() function
        if (s.empty())
        {
            s.push(data);
            mini = data;
        }
        else
        {
            if (data < mini)
            {

                s.push(2 * data - mini);
                mini = data;
            }
            else
            {
                s.push(data);
            }
        }
    }

    int pop()
    {
        // Implement the pop() function.
        if (s.empty())
        {
            return -1;
        }
        int curr = s.top();
        s.pop();
        if (curr > mini)
        {
            return curr;
        }
        else
        {
            int prevMiin = mini;
            int val = 2 * mini - curr;
            mini = val;
            return prevMiin;
        }
    }

    int top()
    {
        if (s.empty())
        {
            return -1;
        }
        int curr = s.top();
        if (curr < mini)
        {
            return mini;
        }
        else
        {
            return curr;
        }
        // Implement the top() function.
    }

    bool isEmpty()
    {
        return s.empty();
        // Implement the isEmpty() function.
    }

    int getMin()
    {
        // Implement the getMin() function.
        if (s.empty())
            return -1;

        return -1;
    }
};