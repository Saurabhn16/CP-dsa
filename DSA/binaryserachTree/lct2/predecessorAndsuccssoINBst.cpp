
void solve(BinaryTreeNode<int> *root, int key, pair<int, int> &k) {}
pair<int, int> predecessorSuccessor(BinaryTreeNode<int> *root, int key)
{
    int pre = -1;
    int su = -1;

    BinaryTreeNode<int> *temp = root;
    while (temp->data != key)
    {
        if (temp->data > key)
        {
              su = temp->data;
            temp = temp->left;
         
        }
        else  (temp->data < key)
            {
                  pre = temp->data;
                temp = temp->right;
               
            }
    }

    if (temp->data == key)
    {
        BinaryTreeNode<int> *s = temp->right;
        BinaryTreeNode<int> *p = temp->left;

        while (p)
        {
            pre = p->data;
            p = p->right;
        }
    
    {
        while (s)
        {
            su = s->data;
            s = s->left;
        }
    }}
    pair<int,int>ans=make_pair(pre,su);

    return ans;
    

}
