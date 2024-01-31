#include <bits/stdc++.h>
// Following is the Binary Tree node structure
/**************
class BinaryTreeNode {
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
***************/
void inorder(BinaryTreeNode<int> *root, vector<int> &inorderVal)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left, inorderVal);
    inorderVal.push_back(root->data);
    inorder(root->right, inorderVal);
}
bool twoSumInBST(BinaryTreeNode<int> *root, int target)
{
    vector<int> inorderVal;
    inorder(root, inorderVal);
    //
    int i = 0;
    int j = inorderVal.size() - 1;
    while (i < j)
    {
        int sum = inorderVal[i] + inorderVal[j];

        if (sum == target)
        {
            return true;
        }
        else if (sum > target)
        {
            j--;
        }
        else if (sum < target)
        {
            i++;
        }
    }
    return false;
}