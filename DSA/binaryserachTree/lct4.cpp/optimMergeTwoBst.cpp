#include <bits/stdc++.h>



void convertIntoSortedLL(TreeNode<int> *root, TreeNode<int> *&head) {
    if (root == NULL) {
        return;
    }
    convertIntoSortedLL(root->right, head);
    root->right = head;
    if (head != NULL) {
        head->left = root;
    }
    head = root;
    convertIntoSortedLL(root->left, head);
}




TreeNode<int> *mergeLinkedList(TreeNode<int> *head1, TreeNode<int> *head2) {
    TreeNode<int> *head = NULL;
    TreeNode<int> *tail = NULL;
    while (head1 != NULL && head2 != NULL) {
        if (head1->data < head2->data) {
            if (head == NULL) {
                head = head1;
                tail = head1;
                head1 = head1->right;
            } else {
                tail->right = head1;
                head1->left = tail;
                tail = head1;
                head1 = head1->right;
            }
        } else {
            if (head == NULL) {
                head = head2;
                tail = head2;
                head2 = head2->right;
            } else {
                tail->right = head2;
                head2->left = tail;
                tail = head2;
                head2 = head2->right;
            }
        }
    }
    while (head2 != NULL) {
        tail->right = head2;
        head2->left = tail;
        tail = head2;
        head2 = head2->right;
    }
    while (head1 != NULL) {
        tail->right = head1;
        head1->left = tail;
        tail = head1;
        head1 = head1->right;
    }
    return head;
}





int countNodes(TreeNode<int> *head) {
    int cnt = 0;
    TreeNode<int> *temp = head;
    while (temp != NULL) {
        cnt++;
        temp = temp->right;
    }
    return cnt;
}



TreeNode<int> *sortedLLToBst(TreeNode<int> *&head, int n) {
    if (n <= 0 || head == NULL) {
        return NULL;
    }
    TreeNode<int> *left = sortedLLToBst(head, n / 2);
    TreeNode<int> *root = head;
    root->left = left;
    head = head->right;
    root->right = sortedLLToBst(head, n - n / 2 - 1);
    return root;
}



TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2) {
    TreeNode<int> *head1 = NULL;
    convertIntoSortedLL(root1, head1);
    head1->left = NULL;

    TreeNode<int> *head2 = NULL;
    convertIntoSortedLL(root2, head2);
    head2->left = NULL;

    TreeNode<int> *head = mergeLinkedList(head1, head2);

    return sortedLLToBst(head, countNodes(head));
}
