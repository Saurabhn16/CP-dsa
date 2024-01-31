// Given an array of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum. 

#include<bits/stdc++.h> 
using namespace std; 



class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n=arr.size();
        vector<vector<bool>> dp(n,vector<bool> (sum+1,0));
        for(int i=0;i<n;i++){
            dp[i][0]=true;
        }
        dp[0][arr[0]]=true;
        for(int i=1;i<n;i++){
            for(int j=1;j<=sum;j++){
                //dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i]]
                dp[i][j]=dp[i-1][j];
                if(j>=arr[i]){
                    dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i]];
                }
                
            }
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<sum+1;j++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return dp[n-1][sum];
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 