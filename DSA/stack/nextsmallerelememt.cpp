#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    int j=-1;

    s.push(j);
    vector<int> k;

    for (int i = n - 1; i >= 0; i--)
    {

        if (s.top() < arr[i])
        {
            k.push_back(s.top());
            s.push(arr[i]);
        }

        else
        {
            while (s.top() >= arr[i])
            {
                s.pop();
            }
            int m =s.top();
            k.push_back(m);
            s.push(arr[i]);
        }
    }
    reverse(k.begin(),k.end());
    return k;
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            a.push_back(k);
        }
        nextSmallerElement(a, n);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}