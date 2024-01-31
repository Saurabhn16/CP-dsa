

class Solution {
public:
   int arr[3];
int findAndCount(TreeNode* root, int x) {
        if(root == NULL) return 0;
        int l = findAndCount(root -> left, x);
        int r = findAndCount(root -> right, x);
        
            if(root -> val == x) {
                arr[0] = l;
                arr[1] = r;
            }
        
        return l+r+1;
    }

    bool btreeGameWinningMove(TreeNode* root, int n, int x) {
if(root==NULL){ return false;}  
      findAndCount(root, x);
        arr[2] = n - arr[0] - arr[1] - 1;
        sort(arr, arr+3);
        
        if(arr[2] > arr[0] + arr[1]) return true;
        return false;

    }
};