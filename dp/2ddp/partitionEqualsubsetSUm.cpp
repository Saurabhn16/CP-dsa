//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
bool solve(int index,int a[],int N,int target){
     if(index>=N){return 0;}
     if(target<0){ return 0;}
     if(target==0){ return 0;}
     bool incl=solve(index+1,arr,N,target -arr[index]);
     bool excl =solve(index+1,arr,N,target);
     return incl|| excl;
}
    int equalPartition(int N, int arr[])
    {
       int total =0;
       for (int  i = 0; i < N; i++)
       {
total+=arr[i];
       }
       if(total&1){ return 0;}
       return solve(0,arr,N,target);
       
    }bool solve(int index, int arr[], int N, int target, vector<vector<int>>& memo) {
    if (index >= N) {
        return false;
    }
    if (target < 0) {
        return false;
    }
    if (target == 0) {
        return true;
    }
    if (memo[index][target] != -1) {
        return memo[index][target];
    }
    bool incl = solve(index + 1, arr, N, target - arr[index], memo);
    bool excl = solve(index + 1, arr, N, target, memo);
    memo[index][target] = incl || excl;
    return memo[index][target];
}

int equalPartition(int N, int arr[]) {
    int total = 0;
    for (int i = 0; i < N; i++) {
        total += arr[i];
    }
    if (total % 2 != 0) {
        return 0;
    }
    int target = total / 2;
    vector<vector<int>> memo(N, vector<int>(target + 1, -1));
    return solve(0, arr, N, target, memo);
}






};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends