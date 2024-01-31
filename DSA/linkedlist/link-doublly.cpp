#include <Bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHEAD()
{
    node *n = new node(val);
    n->next = head;

    if (head != NULL)
    {
        head->prev = n;
    }
    head->prev = n;
}
void insertAtTail(node *&head, int val)
{
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    node *n = new node(val);
    node *temp = head;

    while (temp->next = NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void deleteAtHead( node* &head){
 node* todelete=head;
 head=head->next;
 head->prev=NULL;
  delete todeletel;



}
void deletion(node *&head, int pos)
{   if (pos==1)
{
    deleteAtHead(head);
    return;
}

    node *temp = head;
    int count = 1;
    while (temp != NULL && cout != pos)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    delete temp;


}
int main()
{
    int n;
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    return 0;
}