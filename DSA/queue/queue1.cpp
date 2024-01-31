#include <bits/stdc++.h>

class Queue {
public:
    int *arr;
    int Front;
    int rear;
    int n = 100000;

    Queue() {
        arr = new int[n];
        Front = -1;
        rear = -1;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if (Front > rear || Front == -1) {
            return true;
        }
        return false;
    }

    void enqueue(int data) {
        if (rear == n - 1) {
            return; // Do not enqueue if the queue is full
        }
        rear++;
        arr[rear] = data;
        if (Front == -1) {
            Front = 0;
        }
    }

    int dequeue() {
        if (!(Front > rear || Front == -1)) {
            int ans = arr[Front];
            Front++;
            if (Front > rear) {
                Front = -1;
                rear = -1;
            }
            return ans;
        }
        return -1; // Return -1 when the queue is empty or an invalid condition occurs
    }

    int front() {
        if (Front > rear || Front == -1) {
            return -1;
        }
        return arr[Front];
    }
};
