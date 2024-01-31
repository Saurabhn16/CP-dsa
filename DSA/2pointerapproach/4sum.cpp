class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        vector<vector<int>> ans;

        int S = nums.size();
        sort(nums.begin(), nums.end());
        for (int k = 0; k < S - 3; k++)
        {
            if (k > 0 && nums[k] == nums[k - 1])
                continue;
            for (int i = k + 1; i < S - 2; i++)
            {

                if (i > k + 1 && nums[i] == nums[i - 1])
                {
                    continue;
                }
                int l = i + 1;
                int h = S - 1;
                while (l < h)
                 {
         long long sum = nums[i];
                sum += nums[h];
                sum += nums[k];
                sum += nums[l];
          
                      if (sum > target)
                    {
                        h--;
                    }
                    else if (sum < target)
                    {
                        l++;
                    }
                    else if (sum == target)
                    {
                        // if (temp.size() != 0)
                        {
                            ans.push_back({nums[k] ,nums[i], nums[l], nums[h]});
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
        }

        return ans;
    }
};