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
 

    int deepestLeavesSum(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0; // If the tree is empty, the sum of deepest leaves is 0
        }


        queue<TreeNode *> q;
        q.push(root);
int sum=0;
        while (!q.empty())
        {
            int nodesInLevel = q.size();

            for (int i = 0; i < nodesInLevel; i++)
            {
                TreeNode *currentNode = q.front();
                q.pop();

          
                    sum += currentNode->val; // Add the value of the deepest leaves to the sum
              

                if (currentNode->left)
                {
                    q.push(currentNode->left);
                }
                if (currentNode->right)
                {
                    q.push(currentNode->right);
                }
            }

           
        }

        return sum;
    }
};
