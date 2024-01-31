#include <bits/stdc++.h>
void LCAinaBST(TreeNode<int> *root, TreeNode<int> *P, TreeNode<int> *Q, int &k)
{
}
TreeNode<int> *LCAinaBST(TreeNode<int> *root, TreeNode<int> *P, TreeNode<int> *Q)
{

    if (root == NULL)
    {
        return NULL;
    }
    if (root->data > P->data && root->data > Q->data)
    {
        return LCAinaBST(root->left, P, Q);
    }
    else if (root->data < P->data && root->data < Q->data)
    {
        return LCAinaBST(root->right, P, Q);
    }

     
        return root;
}
