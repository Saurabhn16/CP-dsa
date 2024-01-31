/* Tree node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  public:
  int ans=0;
    // Function to return the diameter of a Binary Tree.
    int height(struct Node* node){
        if(node==NULL){
             return 0;
        }
        int left =height(node->left);
        int right =height(node->right);
        int ans=max(left,right)+1;
        return ans;}
    int diameter(Node* root) {
        // Your code here
        if( root==NULL){
             return 1;
        }
        int left = height(root->left);
        int right  = height(root->right);
        int ans = left+right+1;
         int left1=diameter(root->left);
         int right1=diameter(root->right);
         ans=max({left1,right1,ans});
        return ans;
        
    }
};