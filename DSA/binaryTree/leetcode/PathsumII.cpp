// ROOT-LEaf
#include <bits/stdc++.h> 

// template <typename T>
// class TreeNode {
// public:
//     T data;
//     TreeNode<T> *left;
//     TreeNode<T> *right;

//     TreeNode(T data) {
//         this->data = data;
//         left = NULL;
//         right = NULL;
//     }
// };


void findPaths(TreeNode<int>* root, int k, std::vector<int>& path, std::vector<std::vector<int>>& result) {
    if (root == nullptr) {
        return;
    }

    path.push_back(root->data);

    if (root->left == nullptr && root->right == nullptr && k == root->data) {
        result.push_back(path);
    } else {
        findPaths(root->left, k - root->data, path, result);
        findPaths(root->right, k - root->data, path, result);
    }

    path.pop_back();
}

std::vector<std::vector<int>> KSumPaths(TreeNode<int>* root, int k) {
    std::vector<std::vector<int>> result;
    std::vector<int> path;

    findPaths(root, k, path, result);

    return result;
}
