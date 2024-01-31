class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &nums)
    {

        {
            stack<int> st;
            int n = nums.size();

            unordered_map<int, int> nextGreater;

            for (int j = 0; j < nums.size(); j++)
            {
                for (int i = j; i < nums.size(); i++)
                {
                    while (!st.empty() && st.top() < nums[(i + j) % n])
                    {
                        nextGreater[st.top()] = nums[(i + j) % n];
                        st.pop();
                    }
                    st.push(nums[(i + j) % n]);
                }
            }
            while (!st.empty())
            {
                nextGreater[st.top()] = -1;
                st.pop();
            }

            vector<int> result;
            for (int nums : nums)
            {
                result.push_back(nextGreater[nums]);
            }

            return result;
        }
    }
};
