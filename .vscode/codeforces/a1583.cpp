// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

bool checkComposite(int n)
{
 
    // 1 and 2 are not composite
    // number
    if (n == 1 || n == 2) {
        return false;
    }
 
    // If the number is divisible
    // by any digit except 2 and itself
    // then it's composite
    for (int i = 2; i < n; i++) {
 
        // If composite
        if (n % i == 0 && i != n) {
            return true;
        }
    }
 
    return false;
}
 
// Utility Function to find largest composite
// subset sum
void largestCompositeSum(int arr[], int n)
{
 
    // Vector to store the elements of
    // arr in order of first even then
    // odd numbers
    vector<int> temp;
    vector<int>idx;

    // Even numbers pushed first in
    // temp array
    for (int i = 0; i < n; i++) {
 
        // Even check
        if (arr[i] % 2 == 0) {
            temp.push_back(arr[i]);
 idx.push_back(i);
        }
    }
 
    // Odd numbers pushed
    for (int i = 0; i < n; i++) {
        // Odd check
        if (arr[i] % 2 == 1) {
            temp.push_back(arr[i]);
            idx.push_back(i);
        }
    }
 
    // To store current sum
    int cursum = 0;
 
    // To store maximum length composite
    // sum
    int maxlen = 0;
 
    for (int i = 0; i < n; i++) {
        cursum += temp[i];
 
        // If composite then update
        // cursum
        if (checkComposite(cursum)
            && cursum > maxlen) {
            maxlen = i + 1;
        }
    }
 
    cout << maxlen << endl;
 
    // Printing the required array
  
  for (int i = 0; i < maxlen; i++) {
        cout<<idx[i]+1<<" ";
    }
 
    return;
}
 
// Driver Code
int main()
{
 int t;
 cin>>t;
 while(t--){
    int n ;cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
         cin>>arr[i];
    }
    
   
    largestCompositeSum(arr, n);
    cout<<endl;
 }
    return 0;
}