class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int> nums1, vector<int> nums2, int k) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<vector<int>> ans;
        
        // Min heap to store the sum and index of nums1, nums2 pairs
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        
        // Initialize the min heap with the minimum values
        for (int i = 0; i < n1 && i < k; i++) {
            pq.push({nums1[i] + nums2[0], {i, 0}});
        }
        
        // If the priority queue is empty, then no pairs are possible
        while (!pq.empty() && k-- > 0) {
            int sum = pq.top().first;
            int i = pq.top().second.first;
            int j = pq.top().second.second;
            pq.pop();
            
            vector<int> v = {nums1[i], nums2[j]};
            ans.push_back(v);
            
            if (j + 1 == n2)
                continue;
            
            pq.push({nums1[i] + nums2[j + 1], {i, j + 1}}); // Add other pairs
            
       
        }
        
        return ans;
    }
};

