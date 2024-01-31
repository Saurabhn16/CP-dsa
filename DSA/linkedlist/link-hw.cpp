#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
        node *temp = head;
    temp->next = n;
}
int main()
{
    int n;
    node *head = NULL;
insertAtHead
    return 0;
}