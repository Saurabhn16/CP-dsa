#include <vector>
#include <queue>

class Solution {
public:
    int maxProduct(std::vector<int>& nums) {
        std::priority_queue<int> maxHeap;
        for (auto num : nums) {
            maxHeap.push(num);
        }
        int k = maxHeap.top() - 1;
        maxHeap.pop();
        int l = maxHeap.top() - 1;
        return k * l;
    }
};
