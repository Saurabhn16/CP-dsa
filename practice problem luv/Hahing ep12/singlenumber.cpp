class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int hsh[60000];
        int l = nums.size();
        int min = 0;
        for (int i = 0; i < l; i++)

        {
            if (nums[i] <= min)
            {
                min = nums[i];
            }
        }

        for (long long i = 0; i < l; i++)
        {
            int t = nums[i] - min;
            hsh[t]++;
        }
        int p;
        for (int i = 0; i < l; i++)
        {
            {
                int t = nums[i] - min;

                if (hsh[t] == 1)
                {
                    p = nums[i];
                }
                hsh[t] = 0;
            }
        }
        return min;
    }
};