#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();

        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                // cout << " " << endl;
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

Node *insertIntoBst(Node *root, int d)
{
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if (d > root->data)
        root->right = insertIntoBst(root->right, d);
    else
        root->left = insertIntoBst(root->left, d);

    return root;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBst(root, data);
        cin >> data;
    }
}
void inorder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);

    preorder(root->right);
}
void postorder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// min valuse
Node *minVal(Node *root)
{
    Node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}
Node *maxVal(Node *root)
{
    Node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}
Node *deleteFromBST(Node *root, int val)
{
    //   base case ()
    if (root == NULL)
    {
        return root;
    }
    if (root->data == val)
    {
        // 0child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        // 1child
        // right
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
            ;
        }
        // left
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
            ;
        }
        // 2child
        if (root->left != NULL && root->right != NULL)
        {
            int mini = minVal(root->right)->data;
             
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);
            return root;
        }
    }
    else if (root->data > val)
    {
        root->left = deleteFromBST(root->left, val);
        return root;
    }
    else if (root->data < val)
    {
        root->right = deleteFromBST(root->right, val);
        return root;
    }
}
int main()
{
    Node *root = NULL;
    cout << "Enter data to create BST (enter -1 to stop):" << endl;
    takeInput(root);
    cout << "Printing the BST in level order:" << endl;
    levelOrderTraversal(root);
    cout << "Printing the BST in  inorder:" << endl;
    inorder(root);
    cout << endl;
    cout << "Printing the BST in  preorder:" << endl;
    preorder(root);
    cout << endl;
    cout << "Printing the BST in postorder:" << endl;
    postorder(root);
    cout << "MIN value int Bst :" << endl;
    cout << minVal(root)->data << endl;
    cout << "MAX value int Bst :" << endl;
    cout << maxVal(root)->data << endl;
    return 0;
}
