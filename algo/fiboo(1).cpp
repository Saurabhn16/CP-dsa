//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(long  long n) 
 
   { vector<long long> f;
        
    
        long long int x=1,y=1;
        

        if(n>=1)
            f.push_back(1);
        if(n>=2) 
            f.push_back(1);
            
        
        for(int i = 2 ; i < n ; ++ i ) 
        {
           
            f.push_back(x+y);
            long long int z=x+y;
            
          
            x=y;
            y=z;
        }
        
 
        return f;

    
    }
};

//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends