//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
// Utility function to create a new Tree Node
Node *newNode(int val)
{
    Node *temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}
// Function to Build Tree
Node *buildTree(string str)
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size())
    {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N")
        {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N")
        {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

// } Driver Code Ends
/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution
{
public:
    bool z = true;

    pair<bool, int> isSum1(Node *root)
    {
        if (root == NULL)
        {
            pair<bool, int> p = make_pair(true, 0);

            return p;
        }
        if (root->left == NULL && root->right == NULL)
        {
            pair<bool, int> p = make_pair(true, root->data);

            return p;
        }

        pair<bool, int> left = isSum1(root->left);
        pair<bool, int> right = isSum1(root->right);
        int leftData = left.second;
        int rightData = right.second;
        int op3 = leftData + rightData;
        bool l = left.first;
        bool r = right.first;

        bool ans = true;
        if (root->data == op3)
        {
            ans = true;
        }
        else
        {

            ans = false;
        }
        pair<bool, int> k;

        if (l && r && ans)
        {
            k.first = true;
        }
        else
        {
            k.first = false;
        }

        k.second = 2 * (leftData + rightData);
        return k;
    }
    bool isSumTree(Node *root)
    {

        return isSum1(root).first;
        ;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    scanf("%d ", &t);
    while (t--)
    {
        string s;
        getline(cin, s);
        Node *root = buildTree(s);
        Solution ob;
        cout << ob.isSumTree(root) << endl;
    }
    return 1;
}
// } Driver Code Ends