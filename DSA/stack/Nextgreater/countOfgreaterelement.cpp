int sorted(stack<int> &st, int val)
{

    // base case

    if (st.empty() || st.top() > val)
    {

        st.push(val);

        return st.size() - 1;
    }

    int temp = st.top();

    st.pop();

    int cnt = sorted(st, val);

    st.push(temp);

    return cnt;
}

void solve(vector<int> &arr, stack<int> st, vector<int> &ans, int index)
{

    // base case

    if (index < 0)
    {

        return;
    }

    if (st.empty())
    {

        ans[index] = 0;
    }

    int count = sorted(st, arr[index]);

    ans[index] = count;

    solve(arr, st, ans, index - 1);
}

vector<int> countGreater(vector<int> &arr, vector<int> &query)
{

    // Write your code here.

    int n = arr.size();

    vector<int> ans(n);

    stack<int> st;

    int index = n - 1;

    solve(arr, st, ans, index);

    vector<int> local(query.size());

    for (int i = 0; i < query.size(); i++)
    {

        local[i] = ans[query[i]];
    }

    return local;
}