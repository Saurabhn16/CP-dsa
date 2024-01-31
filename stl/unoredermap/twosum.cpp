class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int &target) {
unordered_map<int, int> numMap;

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];

 //count return 1 if element is present in the map& 0 if not 
        if (numMap.count(complement) > 0) {
            return {numMap[complement], i};
        
        }


         numMap[nums[i]] = i;}
   
    return {};
    }
};