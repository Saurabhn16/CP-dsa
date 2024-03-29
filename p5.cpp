/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    bool operator()( ListNode *a,  ListNode *b) { return a->data > b->data; }
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {

        priority_queue< ListNode *, vector< ListNode *>, compare> minHeap;
        int k = listArray.size();
        for (int i = 0; i < k; i++)
        {

            if (listArray[i] != NULL)
                minHeap.push(listArray[i]);
        }

         ListNode *head = NULL;
         ListNode *tail = NULL;
        while (minHeap.size() > 0)
        {
             ListNode *top = minHeap.top();

            minHeap.pop();
            if (top->next != NULL)
            {
                minHeap.push(top->next);
            }
            if (head == NULL)
            {
                head = top;
                tail = top;
            }
            else
            {
                tail->next = top;
                tail = top;
            }
        }
        return head;
    }
};