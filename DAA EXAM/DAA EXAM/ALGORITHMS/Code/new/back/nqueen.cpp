// class Solution {
//     public:
//       bool safe(int row, int col, vector <string> &board, int n) {
//       int duprow = row;
//       int dupcol = col;
//         // to check upwards diagonally
//       while (row >= 0 && col >= 0) {
//         if (board[row][col] == 'Q')
//           return false;
//         row--;
//         col--;
//       }

//       col = dupcol;
//       row = duprow;
//     //   to check horizontally
//       while (col >= 0) {
//         if (board[row][col] == 'Q')
//           return false;
//         col--;
//       }

//       row = duprow;
//       col = dupcol;
//     //   to check downwards diagonally
//       while (row < n && col >= 0) {
//         if (board[row][col] == 'Q')
//           return false;
//         row++;
//         col--;
//       }
//       return true;
//     }

//     public:
//     void queens(vector<vector<string>>&ans,vector<string> &res,int col, int n){
//         if(col==n){
//             ans.push_back(res);
//         }
//         for(int i=0;i<n;i++){
//             if(safe(i,col,res,n)){
//                 res[i][col] = 'Q';
//                 queens(ans,res,col+1,n);
//                 res[i][col]= '.';
//             }
//         }
//     }
// public:
//     vector<vector<string>> solveNQueens(int n) {
//         vector<vector<string>> ans;
//         vector<string> res(n);
//         string s(n,'.');
//         for(int i=0;i<n;i++){
//             res[i] = s;
//         }
//         queens(ans,res,0,n);
//         return ans;

//     }
// };