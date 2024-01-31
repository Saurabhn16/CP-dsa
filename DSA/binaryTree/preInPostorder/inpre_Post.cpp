//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

void printPostOrder(Node *root)
{
    if (root == NULL)
        return;
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout << root->data << " ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution
{
public:
int search(int arr[], int startIn,int endIn, int data)
{
    int i = 0;
    for (i = startIn; i < endIn; i++)
    {
        if (arr[i] == data)
        {
            return i;
        }
    }
    return i;
}
 
    Node *Solve(int in[], int pre[], int &index, int inStart, int inEnd, int n, map<int, int>&nodeToIndex)
    {

        // base case
        if (index >= n || inStart > inEnd)
        {
            return NULL;
        }
        // create a root node for element

        int element = pre[index++];
        Node *root = new Node(element);

        // find element's index in inorder
        int postion = search(in ,inStart,inEnd,element);
        // recursive call
        root->left = Solve(in, pre, index, inStart, postion - 1, n, nodeToIndex);
        root->right = Solve(in, pre, index, postion + 1, inEnd, n, nodeToIndex);
        return root;
    }
    Node *buildTree(int in[], int pre[], int n)
    {
        int index = 0;
        int inStart = 0;
        int inEnd = n -1;
        map<int, int> nodeToIndex;
        createMapping(in, nodeToIndex, n);
        Node *ans = Solve(in, pre, index, 0, n-1, n, nodeToIndex);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int inorder[n], preorder[n];
        for (int i = 0; i < n; i++)
            cin >> inorder[i];
        for (int i = 0; i < n; i++)
            cin >> preorder[i];
        Solution obj;
        Node *root = obj.buildTree(inorder, preorder, n);
        printPostOrder(root);
        cout << endl;
    }
}

// } Driver Code Ends