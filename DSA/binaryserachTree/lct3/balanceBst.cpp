/*************************************************************
    Following is the Binary Serach Tree node structure

    template <typename T>
    class TreeNode
    {
    public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };

*************************************************************/
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
TreeNode<int> *inorderToBst(int s, int e, vector<int> in)
{
    // base
    if (s > e)
      {  return NULL;}
    int mid = (s + e) / 2;
    TreeNode<int> *root = new TreeNode<int>(in[mid]);
    root->left = inorderToBst(s, mid - 1, in);
    root->right = inorderToBst(mid + 1, e, in);
    return root;
}
TreeNode<int> *balancedBst(TreeNode<int> *root)
{

    vector<int> inorderVal;
    inorder(root, inorderVal);
    return inorderToBst(0,inorderVal.size()-1,inorderVal);
}
