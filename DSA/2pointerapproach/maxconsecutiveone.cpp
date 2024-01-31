class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int i = 0;
        int j = 0;
        int mx = 0;
        int ct = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] == 0 || j == nums.size() - 1)
            {
                ct = j - i;

                i = j + 1;
                j++;
                {
                    mx = max(mx, ct);
                }

                ct = 0;
            }
            if (j == nums.size() - 1 && nums[j] == 1)
            {
                ct = j - i + 1;

                i = j + 1;
                j++;
                {
                    mx = max(mx, ct);
                }

                ct = 0;
            }
        }
        return mx;
    }
};