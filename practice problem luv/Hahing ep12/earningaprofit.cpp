class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        int l = nums.size();
        int min = 0;
        for (int i = 0; i < l; i++)

        {
            if (nums[i] < min)
            {
                min = nums[i];
            }
        }
        int hsh[10000000];
        for (long long i = 0; i < l; i++)
        {
            int t = min + nums[i];
            hsh[t]++;
        }
        int p = 0;
        for (int i = 0; i < l; i++)
        {
            {
                int t = min + nums[i];
                if (hsh[t] > 1)
                {
                    p = 1;
                }
                hsh[t] = 0;
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