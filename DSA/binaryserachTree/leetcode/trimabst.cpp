/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    void solve(TreeNode *root, TreeNode *&temp, int low, int high)
    {
        if (root == NULL)
        {
            return;
        }
        if (low < root->val && root->val < high)
        {
            temp.insert(root);
        }
        if (root->val < low)
        {
            root = root->right;
            solve(root->right, temp, low, high);
        }
        if (root->val > high)
        {
            root = root->left;
            solve(root->left, temp, low, high);
        }
        temp=root;
    }
    TreeNode *trimBST(TreeNode *root, int low, int high)
    {
        TreeNode *temp = NULL;
        solve(root, low, high);
        return temp;
    }
};