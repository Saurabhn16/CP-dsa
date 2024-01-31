class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> result(nums.size(), -1);  // Initialize result with -1
        if (nums.empty()) {
            return result;  // Return an empty vector if input is empty
        }
        
        int n = nums.size();
        stack<int> st;
        st.push(nums[n-1]);
        
        for (int i = n-2; i >= 0; i--) {
            while (!st.empty() && st.top() <= nums[i]) {
                st.pop();
            }
            
            if (!st.empty()) {
                result[i] = st.top();
            }
            
            st.push(nums[i]);
        }
        
        for (int i = n-1; i >= 0; i--) {
            while (!st.empty() && st.top() <= nums[i]) {
                st.pop();
            }
            
            if (!st.empty()) {
                result[i] = st.top();
            }
            
            st.push(nums[i]);
        }
        
        return result;
    }
};
