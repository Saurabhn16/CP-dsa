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
class Solution {
public:
    int solve(TreeNode* root, int grandp, int p) {
        if (root == nullptr) {
            return 0; // Base case: no nodes, return 0
        }
        
        int sum = 0;
        
        if (grandp % 2 == 0) {
            sum += root->val; // Add current node's value if the grandparent is even
        }
        
        // Recursively calculate sum for left and right subtrees
        sum += solve(root->left, p, root->val) + solve(root->right, p, root->val);
        
        return sum;
    }
    
    int sumEvenGrandparent(TreeNode* root) {
        int sum = 0;
        int grandp = -1;
        int p = -1;
        
        return solve(root, grandp, p);
    }
};

