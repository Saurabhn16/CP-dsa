//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


// } Driver Code Ends
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverse(struct node *head, int k)
    {
        // Initialize three pointers to keep track of the current, previous, and next nodes.
        struct node *current = head;
        struct node *prev = NULL;
        struct node *next = NULL;

        // Count the number of nodes in the linked list
        int count = 0;
        struct node *temp = head;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }

        // If there are less than 'k' nodes, return the original head
        if (count < k)
        {  
            while ( current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
            count++;
        }
return prev;          
        }

        // Reverse the first 'k' nodes
        count = 0;
        
        while (count < k && current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
            count++;
        }

        // Recursive call to reverse the next group of 'k' nodes
        if (next != NULL)
        {
            head->next = reverse(next, k);
        }

        // 'prev' now becomes the new head of the reversed group
        return prev;
    }
};


//{ Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}


// } Driver Code Ends