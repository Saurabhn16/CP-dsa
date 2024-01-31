  
  #include <bits/stdc++.h>
class Queue
{

    int *arr;
    int qfront;
    int back;
    int n;

public:
    Queue()
    {   n=100001;
        arr = new int[n];
        qfront = -1;
        back = -1;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty()
    {
        if (qfront > back || qfront == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
        // Implement the isEmpty() function
    }

    void enqueue(int data)
    {
        if (back == n - 1)
        {
            cout << "Queue is Full" << endl;
            return;
        }
        back++;
        arr[back] = data;
        if (qfront == -1)
        {
            qfront++;
        }
    }

    int dequeue()
    {
        if (qfront == -1 || qfront > back)
        {
            //  cout<<" NO element in queue "
            return -1;
        }
   int k=arr[qfront];
         
                 qfront++;
                   return k ;
    }

    int front()
    {
        if (qfront == -1 || qfront > back)
        {
            //   /  cout<<" NOelement "
            return -1;
        }
        return arr[qfront];
        // Implement the qfront() function
    }
};
