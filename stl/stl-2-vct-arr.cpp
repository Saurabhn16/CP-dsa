#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int> v)
{
    cout << " size :" << v.size()  << endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        for (int j = 0; j < x; j++)
        {
            int b;
            cin >> b;
            a[i].push_back(b);
        }
    }
    for (int i = 0; i < n; i++)
    {
        printVec(a[i]);
    }

    return 0;
}