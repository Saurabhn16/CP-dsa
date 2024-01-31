vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    stack<int> st;
    int n = nums1.size();
    unordered_map<int, int> nextGreater;

    for (int i = 0; i < nums2.size(); i++)
    {
        while (!st.empty() && st.top() < nums2[i])
        {
            nextGreater[st.top()] = nums2[i];
            st.pop();
        }
        st.push(nums2[i]);
    }

    while (!st.empty())
    {
        nextGreater[st.top()] = -1;
        st.pop();
    }

    vector<int> result;
    for (int num : nums1)
    {
        result.push_back(nextGreater[num]);
    }

    return result;
}
