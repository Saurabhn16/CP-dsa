class Solution
{
public:
    int hIndex(vector<int> &citations)
    {
        sort(citations.begin(), citations.end());
        int ct = 0;
        int n = citations.size();
        for (int i = n-1; i>=0;i--)
        {
            int l = lower_bound(citations.begin(), citations.end(),i) - citations.begin();
if(n-l<i+1){
    ct=n-l;
    break;
}
            cout << n - l << " " << endl;
        }

        return ct;
    }
};
