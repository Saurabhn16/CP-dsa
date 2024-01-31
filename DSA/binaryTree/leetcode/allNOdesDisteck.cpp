/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
    void MapParent(unordered_map<TreeNode *, TreeNode *> &mp, TreeNode *root)
    {
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            TreeNode *curr = q.front();
            q.pop();
            if (curr->left)
            {
                mp[curr->left] = curr;
                q.push(curr->left);
            }
            if (curr->right)
            {
                mp[curr->right] = curr;
                q.push(curr->right);
            }
        }
    }

    vector<int> distanceK(TreeNode *root, TreeNode *target, int k)
    {
        unordered_map<TreeNode *, TreeNode *> parent_map;
        MapParent(parent_map, root);
        unordered_map<TreeNode *, bool> visited;

        queue<TreeNode *> q;
        q.push(target);
        visited[target] = true;
        int curr_level = 0;
        while (!q.empty())
        {
            int size = q.size();
            if (curr_level++ == k)
            {
                break;
            }

            for (int i = 0; i < size; i++)
            {

                // imp

                TreeNode *curr = q.front();
                q.pop();
                if (curr->left && !visited[curr->left])
                {
                    visited[curr->left] = true;
                    q.push(curr->left);
                }
                if (curr->right && !visited[curr->right])
                {
                    visited[curr->right] = true;
                    q.push(curr->right);
                }
                if (parent_map[curr] && !visited[parent_map[curr]])
                {
                    visited[parent_map[curr]] = true;
                    q.push(parent_map[curr]);
                }
            }
        }
        vector<int> result;
        while (!q.empty())
        {
            TreeNode *curr = q.front();
            q.pop();
            result.push_back(curr->val);
        }
        return result;
    }
};