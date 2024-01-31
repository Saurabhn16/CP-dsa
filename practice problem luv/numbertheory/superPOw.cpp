class Solution {
public:

int binMultiply(int a,long long b, int M);
{
        int ans = 1;
    while (b>0)
    {
        if (b & 1)
        {
            ans = (ans *1LL* a)%M;
        }
        a = (a *1LL*a)%M;
        b >>= 1;
    }
    return ans;
}  
    int superPow(int a, vector<int>& b) {
        int k=0;
        int M =
        int n=b.size();
        for (int  i = 0; i<n; i++)
        {
            k+=b[i];
            k=k*10;

        }
        return binMultiply(a,k,M)

        
    }
};