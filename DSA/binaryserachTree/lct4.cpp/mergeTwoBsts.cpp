#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class TreeNode {
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void inorder(TreeNode<int> *root, vector<int> &inorderVal) {
    if (root == nullptr) {
        return;
    }
    inorder(root->left, inorderVal);
    inorderVal.push_back(root->data);
    inorder(root->right, inorderVal);
}

vector<int> mergeTwoArrays(vector<int> &a, vector<int> &b) {
    vector<int> ans;
    int i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            ans.push_back(a[i]);
            i++;
        } else {
            ans.push_back(b[j]);
            j++;
        }
    }
    while (i < a.size()) {
        ans.push_back(a[i]);
        i++;
    }
    while (j < b.size()) {
        ans.push_back(b[j]);
        j++;
    }
    return ans;
}

TreeNode<int> *inorderToBST(int s, int e, vector<int> &inorder) {
    if (s > e) {
        return nullptr;
    }
    int mid = (s + e) / 2;
    TreeNode<int> *root = new TreeNode<int>(inorder[mid]);
    root->left = inorderToBST(s, mid - 1, inorder);
    root->right = inorderToBST(mid + 1, e, inorder);
    return root;
}

TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2) {
    vector<int> inorder1, inorder2;
    inorder(root1, inorder1);
    inorder(root2, inorder2);
    vector<int> mergedArr = mergeTwoArrays(inorder1, inorder2);
    int start = 0, end = mergedArr.size() - 1;
    return inorderToBST(start, end, mergedArr);
}

// Sample usage
int main() {
    // Create two BSTs
    TreeNode<int> *root1 = new TreeNode<int>(4);
    root1->left = new TreeNode<int>(2);
    root1->right = new TreeNode<int>(5);

    TreeNode<int> *root2 = new TreeNode<int>(3);
    root2->left = new TreeNode<int>(1);
    root2->right = new TreeNode<int>(6);

    // Merge the BSTs
    TreeNode<int> *mergedRoot = mergeBST(root1, root2);

    // Print the inorder traversal of the merged BST
    vector<int> mergedInorder;
    inorder(mergedRoot, mergedInorder);
    for (int val : mergedInorder) {
        cout << val << " ";
    }
    cout << endl;

    // Clean up the memory
    delete root1;
    delete root2;
    // TODO: Implement a function to delete the merged BST nodes

    return 0;
}
