#include <bits/stdc++.h>
using namespace std;
#define int long long
class node
{
public:
    int data;
    node *right;
    node *left;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildTree(node *root)
{
    cout << "Enter the data :" << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data for inserting in left:- " << data << endl;
    ;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right:- " << data << endl;
    ;
    root->right = buildTree(root->right);
    return root;
}
void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();

        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                cout<<"NULL"<<endl;
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
void inorder(node *root)
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
void preorder(node *root)
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
void postorder(node *root)
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
node *buildFromLevelOrder(node* &root)
{
    queue<node*>q;
    cout << "Enter data for root " << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << "enter left node for :" << temp->data << endl;
        int leftData;
        cin >> leftData;
        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }
        cout << "enter right node for :" << temp->data << endl;
        int rightData;
        cin >> rightData;
        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
    return root;
}
signed main()
{
    node *root = NULL;
     buildFromLevelOrder(root);

    // root = buildTree(root);
    // // 1 3 7 -1 -1 11 -1 -1 5

    // cout << "Printing the level order traversal output" << endl;
    levelOrderTraversal(root);
    // cout << "Inorder traversal :-" << endl;
    // inorder(root);
    // cout << "Preorder traversal :-" << endl;
    // preorder(root);
    // cout << "Postorder traversal :-" << endl;
    // postorder(root);
    return 0;
}