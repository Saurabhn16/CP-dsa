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
    int maxLevelSum(TreeNode *root)
    {
        int l = 1;
        queue<TreeNode *> q;
        q.push(root);
        int index = l;
        int mx = root->val;
        while (!q.empty())
        {
            l++;
            int sum = 0;
            int sz = q.size();

            for (int i = 0; i < sz; i++)
            {
                int temp = q.front();
                q.pop();
                if (temp->left)
                {
                    q.push(temp->left);
                    sum += temp->left->val;
                }
                if (temp->right)
                {
                    q.push(temp->right);
                    sum += temp->right->val;
                }
            }
            if (sum > mx)
            {

                index = l;
            }
        }
        return l;
    }
};