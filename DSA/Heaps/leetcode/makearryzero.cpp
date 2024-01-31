class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {

        priority_queue<int, vector<int>, greater<int>> pq;
        for (auto num : nums)
        {
            if (num > 0)
            {
                pq.push(num);
            }
        }
        int ct = 0;
        while (!pq.empty())
        {
            int mn = pq.top();
            vector<int> pt;
            while (!pq.empty())
            {
                int r = pq.top() - mn;
                if (r > 0)
                {
                    pt.push_back(r);
                }
                for (auto it : pt)
                {
                    pq.push(it);
                }
               
            }
             ct++;
        }

        return ct;
    }
};
