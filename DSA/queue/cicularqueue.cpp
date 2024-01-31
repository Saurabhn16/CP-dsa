#include <bits/stdc++.h>
class CircularQueue
{
public:
    // Initialize your data structure.
    int *arr;
    int rear;
    int size;
    int front;

    CircularQueue(int n)
    {
        // Write your code here.
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack,
    // and false otherwise.
    bool enqueue(int value)
    {
        // Write your code here.
        if ((front == 0 &&rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            return false;
        }
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = value;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty,
    // otherwise returns the popped element.
    int dequeue()
    {
        if (front == -1 )
        {
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if (front == rear)
        {
            front = rear = -1;
        }
     
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
        return ans;
        // Write your code here.
    }
};n  