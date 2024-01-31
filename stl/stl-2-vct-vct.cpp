#include <Bits/stdc++.h>
using namespace std;
void printVec(vector<int> v)
{
    cout << " size :" << v.size() << v.size() << endl;
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
    vector<vector<int>> v;

    for (int i = 0; i < n; i++)
    {
        int N;
        cin >> N;
        v.push_back(vector<int>());
        for (int J = 0; J < n; J++)

        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        printVec(v[i]);
    }
    cout << v[0][1];

 
}