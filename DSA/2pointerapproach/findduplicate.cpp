class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        
            if (nums.size() == 0 && nums.size()==1)
            {
                return ans;
            }
            int i = 0;
            int j=1;
            int k = 0;
            for (int j = 1; j < nums.size(); j++)
            {
                if ((nums[i] == nums[j]) && (k ==0))
                {
                    k = 1;
                     ans.push_back(nums[i]);
                }
            if (nums[j] != nums[i] )
                {
                    i=j;

                    k=0;
               

                }
            }
            return ans;
        
    }
};