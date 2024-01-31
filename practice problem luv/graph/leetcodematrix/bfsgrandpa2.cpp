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
    int solvebfs(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        queye<TreeNode *> q;
        q.push(root);
        int s = 0;
        while (!q.empty())
        {
            int n = q.size();
            for (int i = 0; i < n; i++)
            {
                TreeNode *temp = q.front();
                q.pop();
                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->rigth);
                }
                if (temp->val % 2 == 0)
                {
                    if (temp->left)
                    {
                        if (temp->left->left)
                            s += temp->left->left->val;
                        if (temp->left->right)
                            s += temp->left->right->val;
                    }
                    if (temp->right)
                    {
                        if (temp->right->left)
                            s += temp->right->left->val;
                        if (temp->right->right)
                            s += temp->right->right->val;
                    }
                }
            }
        }
        return s;
    }

    int sumEvenGrandparent(TreeNode *root)
    {

        return bfs(root);
    }
};
