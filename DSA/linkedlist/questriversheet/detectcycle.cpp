#include <bits/stdc++.h>
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
        };

*****************************************************************/

bool detectCycle(Node *head)
{
    if (head == NULL)
    {
        return false;
    }
    Node *temp = head;
    Node *temp2 = head;
    int k = 0;
    while (temp->next != NULL && temp2->next->next != NULL)
    {
        temp = temp->next;
        temp2 = temp2->next->next;
        if (temp == temp2)
        {
            return true;
        }
    }

    return false;
}