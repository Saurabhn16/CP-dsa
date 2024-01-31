class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        vector<int> c;
        deque<int> dq;

        int mx = -1000000;
        int n = 0;
        for (int i = 0; i < k; i++)
        {

            while (!dq.empty() && nums[dq.back()] < nums[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        c.push_back(nums[dq.front()]);
        for (int i = k; i < nums.size(); i++)
        {

            while (!dq.empty() && i - dq.front() >= k)
            {
                dq.pop_front();
            }
            while (!dq.empty() && nums[dq.back()]< nums[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);
                  c.push_back(nums[dq.front()]);
        }
        return c;
    }
};