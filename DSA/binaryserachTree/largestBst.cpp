#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/

class info {
public:
    int maxi;
    int mini;
    bool isBst;
    int size;
};

info solve(TreeNode<int>* root, int &ans) {
    // Base case
    if (root == nullptr) {
        return {INT_MIN, INT_MAX, true, 0};
    }
    
    info left = solve(root->left, ans);
    info right = solve(root->right, ans);
    info currNode;
    currNode.size = left.size + right.size + 1;
    currNode.maxi = std::max(root->data, right.maxi);
    currNode.mini = std::max(root->data, left.mini);
    if (left.isBst && right.isBst && (root->data > left.maxi && root->data < right.mini)) {
        currNode.isBst = true;
    } else {
        currNode.isBst = false;
    }
    if (currNode.isBst) {
        ans = max(abs(currNode.size), ans);
    }
    return currNode;
}

int largestBST(TreeNode<int>* root) {
    int maxSize = 0;
    info temp = solve(root, maxSize);
    return maxSize;
}