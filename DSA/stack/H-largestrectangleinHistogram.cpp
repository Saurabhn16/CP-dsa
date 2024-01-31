class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int n = nums.size();
        int mx = -1;
        if (n == 1)
        {
            if (k > 0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            int r = k;
      
            int ct = 0;
            while (r > 0 ||(  j < n &&(nums[j] == 1)) )
            {
                if (nums[j] == 0)
                {
                    r--;
                }
                ct++;
                j++;
            }
            // cout<<ct<<" ";
            mx = max(mx, ct);
            while (i < n && nums[i] == 1)
            {
                i++;
            }
        }
        return mx;
    }
};