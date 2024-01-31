#include <bits/stdc++.h>

void inorder(TreeNode<int> *root, vector<int> &inorderVal)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left, inorderVal);
    inorderVal.push_back(root->data);
    inorder(root->right, inorderVal);
}

//
TreeNode<int> *flatten(TreeNode<int> *root)
{
    vector<int> inorderVal;
    inorder(root, inorderVal);

    TreeNode<int> *temp = new TreeNode<int>(inorderVal[0]);
    TreeNode<int> *curr = temp;
    // 2nd setp
    for (int i = 0; i < inorderVal.size(); i++)
    {
        TreeNode<int> *k = new TreeNode<int>(inorderVal[i]);
        curr->left = NULL;
        curr->right = k;
        curr = k;
    }
    curr->left = NULL;
    curr->right = NULL;
    return temp;
}
