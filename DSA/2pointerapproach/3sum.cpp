class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> ans;

        int S = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < S-2; i++)
        { 
            if (i > 0 && nums[i] == nums[i - 1])
            continue;


            int l = i + 1;
            int h = S - 1;
            while (l < h)
            {

                if (nums[i] + nums[l] + nums[h] > 0)
                {
                    h--;
                }
                else if (nums[i] + nums[l] + nums[h] < 0)
                {
                    l++;
                }
             else    if (nums[i] + nums[l] + nums[h] == 0)
                {
                    // if (temp.size() != 0)
                    {
                        ans.push_back({nums[i], nums[l], nums[h]});
                    }

                    while (l < h && nums[l] == nums[l + 1])
                    {
                        l++;
                    }
                    while (l < h && nums[h] == nums[h - 1])
                    {
                        h--;
                    }
                    l++;
                    h--;
                }
            }
        }

        return ans;
    }
};