class Solution {
public:
 ListNode * reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = head;
        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != NULL && fast->next->next != NULL)
       {     fast = fast->next->next;
        slow = slow->next;
       }
       ListNode* second =reverse( slow->next);

        slow->next = NULL;
        ListNode* temp = head;
        int mx = INT_MIN;
        while (temp != NULL&&second!=NULL) {
            int sum = temp->val + second->val;
            mx = max(sum, mx);
            temp = temp->next;
            second = second->next;
        }
        return mx;
    }
};
