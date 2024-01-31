#include <vector>
#include <stack>

std::vector<int> collidingAsteroids(std::vector<int>& a) {
    std::vector<int> ans;
    int n = a.size();
    std::stack<int> st;

    st.push(a[0]);

    for (int i = 1; i < n; i++) {
        if (a[i] > 0) {
            st.push(a[i]);
        } else if (a[i] <= 0) {
            while (!st.empty() && st.top() > 0 && st.top() + a[i] < 0) {
                st.pop();
            }
            if (st.empty() || st.top() <= 0) {
                st.push(a[i]);
            } else if (st.top() + a[i] == 0) {
                st.pop();
            }
        }
        
    }

    while (!st.empty()) {
        int emp = st.top();
        ans.push_back(emp);
        st.pop();
    }

    reverse(ans.begin(), ans.end());

    return ans;
}
