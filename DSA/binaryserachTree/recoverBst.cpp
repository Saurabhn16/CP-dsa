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
      void recoverTree(TreeNode* root) {
        TreeNode* first = nullptr;
        TreeNode* second = nullptr;
        TreeNode* prev = nullptr;
        TreeNode* current = root;

        // Morris Traversal
        while (current != nullptr) {
            if (current->left == nullptr) {
                // Process current node
                if (prev != nullptr && prev->val > current->val) {
                    if (first == nullptr) {
                        first = prev;
                    }
                    second = current;
                }
                prev = current;

                // Move to the right subtree
                current = current->right;
            } else {
                // Find the rightmost node of the left subtree
                TreeNode* predecessor = current->left;
                while (predecessor->right != nullptr && predecessor->right != current) {
                    predecessor = predecessor->right;
                }

                if (predecessor->right == nullptr) {
                    // Make the current node the right child of its predecessor
                    predecessor->right = current;
                    current = current->left;
                } else {
                    // Revert the changes made and process the current node
                    predecessor->right = nullptr;

                    if (prev != nullptr && prev->val > current->val) {
                        if (first == nullptr) {
                            first = prev;
                        }
                        second = current;
                    }
                    prev = current;

                    // Move to the right subtree
                    current = current->right;
                }
            }
        }

        // Swap the values of the two nodes
        if (first != nullptr && second != nullptr) {
            swap(first->val, second->val);
        }
    }
};
class Solution
{
private:
    TreeNode *first ;
    TreeNode *middle ;
    TreeNode *prev ;
    TreeNode *last;

public:
    void inorder(TreeNode *root)
    {
        if (root == NULL)
            return;
        inorder(root->left);
        if (prev != NULL && (root->val < prev->val))
        {
            if (first == NULL)
            {
                first = prev;
                middle = root;
            }
            else
            {
                last = root;
            }
        }
        prev = root;
        inorder(root->right);
    }
    void recoverTree(TreeNode *root)
    {
        first =middle=last=NULL;
        prev=new TreeNode(INT_MIN);
        inorder(root);


        // Swap the values of the two nodes
        if (first&&last)
        {
            swap(first->val, last->val);
        }
        else if(first&&middle){ swap(first->val,middle->val);}
    }
};