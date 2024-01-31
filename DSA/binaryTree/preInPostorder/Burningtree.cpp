#include <iostream>
#include <algorithm>

class Solution {
public:
  
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

    void convertToRootNode(Node*& root, Node* node) {
        if (node == nullptr || node == root) {
            return; // No conversion needed
        }

        // Find the parent of the selected node
        Node* parent = nullptr;
        Node* current = root;
        while (current != nullptr && current != node) {
            parent = current;
            if (node->val < current->val) {
                current = current->left;
            } else {
                current = current->right;
            }
        }

        if (current == nullptr) {
            return; // Node not found in the tree
        }

        // Update parent's child pointer
        if (parent->left == node) {
            parent->left = nullptr;
        } else {
            parent->right = nullptr;
        }

        // Update selected node's child pointers
        node->left = root->left;
        node->right = root->right;

        // Set selected node as the new root
        root = node;
    }

    int getHeight(Node* node) {
        if (node == nullptr) {
            return 0;
        }

        int leftHeight = getHeight(node->left);
        int rightHeight = getHeight(node->right);

        return std::max(leftHeight, rightHeight) + 1;
    }

    // Utility function to print the tree (in-order traversal)
    void printTree(Node* node) {
        if (node == nullptr) {
            return;
        }

        printTree(node->left);
        std::cout << node->val << " ";
        printTree(node->right);
    }
};

int main() {
    Solution::Node* root = new Solution::Node(5);
    root->left = new Solution::Node(3);
    root->right = new Solution::Node(7);
    root->left->left = new Solution::Node(2);
    root->left->right = new Solution::Node(4);
    root->right->left = new Solution::Node(6);
    root->right->right = new Solution::Node(8);

    Solution solution;

    std::cout << "Original Tree: ";
    solution.printTree(root);
    std::cout << std::endl;

    Solution::Node* nodeToConvert = root->left->right;
    solution.convertToRootNode(root, nodeToConvert);

    std::cout << "Modified Tree: ";
    solution.printTree(root);
    std::cout << std::endl;

    int height = solution.getHeight(root);
    std::cout << "Height of the modified tree: " << height << std::endl;

    // Clean up the tree (free memory)
    // ...

    return 0;
}
