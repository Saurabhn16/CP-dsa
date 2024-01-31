#include<bits/stdc++.h>
using namespace std;
void setZeroes(vector < vector < int >> & matrix) {
  int  n = matrix.size(), m = matrix[0].size();
  for (int i = 0; i < n; i++) {

   if(matrix[i][0]==0){matrix[i][0]=0;}
    for (int j = 0; j < m; j++) {
      if (matrix[i][j] == 0) {
        matrix[i][0] = 0;
        matrix[0][j] = 0;
      }
    }
  }
   
   for (int i = n - 1; i >= 0; i--) {
    for (int j = m - 1; j >= 0; j--) {
      if (matrix[i][0] == 0 || matrix[0][j] == 0) {
        matrix[i][j] = 0;
      }
    }
  
  }

}

int main() {
  vector < vector < int >> arr;
  arr = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
  setZeroes(arr);
  cout<<"The Final Matrix is "<<endl;
  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[0].size(); j++) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
}