/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *left, *right;
    Node()
    {
        this->data = 0;
        left = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->left = NULL;
        this->right = NULL;
    }
    Node(int data, Node* left, Node* right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};
*/
bool solve(Node* root) {
    if (root == nullptr || (root->left == nullptr && root->right == nullptr)) {
        return true;  // Empty tree or leaf node satisfies the property
    }
if (root->left == nullptr) {
        // Node has only right child
        if (root->data != root->right->data) {
            return false;  // Property violation
        }
        return solve(root->right);  // Recursively check right subtree
    }

    if (root->right == nullptr) {
        // Node has only left child
        if (root->data != root->left->data) {
            return false;  // Property violation
        }
        return solve(root->left);  // Recursively check left subtree
    }

    if (root->data != root->left->data + root->right->data) {
        return false;  // Property violation
    }

    // Recursively check the left and right child nodes
    return solve(root->left) && solve(root->right);
}

bool isParentSum(Node* root) {
    if (root == nullptr) {
        return true; // Empty tree satisfies the property
    }

    return solve(root);
}

