// https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &a , int N){
        // code here
        long long pre[N];
        pre[0] = a[0];       
        for(long long i = 1; i < N; i++) {
            pre[i] = pre[i-1] + a[i];
        }
        long long mx = pre[K-1];
        for(long long i = K; i < N; i++) {
            long long sum = pre[i] - pre[i-K];
            mx = max(mx, sum);
        }
        return mx;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends