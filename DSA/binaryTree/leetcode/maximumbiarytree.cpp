#include <bits/stdc++.h> 

/*************************************************************
    Following is the Binary Tree node structure
    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };
*************************************************************/

// This function searches for the index of the maximum element in the given range [start, end] of the tree vector
int search(int start, int end, vector<int>& tree) {
    int maxVal = INT_MIN;
    int idx = -1;

    for (int i = start; i <= end; i++) {
        if (tree[i] > maxVal) {
            maxVal = tree[i];
            idx = i;
        }
    }
    return idx;
}

// This function recursively constructs the maximum binary tree using the tree vector and the range [start, end]
BinaryTreeNode<int>* solve(vector<int>& tree, int start, int end) {
    if (start > end) {
        return nullptr;
    }

    int idx = search(start, end, tree);
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(tree[idx]);
    root->left = solve(tree, start, idx - 1);
    root->right = solve(tree, idx + 1, end);
    return root;
}

// This function constructs the maximum binary tree using the tree vector and the size n
BinaryTreeNode<int>* constructMaximumBinaryTree(vector<int>& tree, int n) {
    int start = 0;
    int end = n - 1;
    return solve(tree, start, end);
}
