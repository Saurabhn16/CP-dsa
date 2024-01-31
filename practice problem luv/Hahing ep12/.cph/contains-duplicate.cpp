class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {  long long  hsh[10000000];
        long long  l = nums.size();
        long long  min = 0;
        long long  k =1e7+13;
        for (int i = 0; i < l; i++)

        {
            if (nums[i] < min)
            {
                min = nums[i];
            }
        }
     
        for (long long i = 0; i < l; i++)
        {
            int t = ( nums[i])-(min);
            hsh[t%k]++;
        }
        int p = 0;
        for (int i = 0; i < l; i++)
        {
            {
                int t = ( nums[i])%k-(min)%k;
                if (hsh[t%k] > 1)
                {
                    p = 1;
                }
                hsh[t%k] = 0;
              
            }
        }
        if (p == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};