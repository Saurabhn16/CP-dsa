//Sets are a collection of elements
 //unique elements ko sorted order mei store karenga
//similar to map we have sets of three types
//1.sets   2.unordered sets   3.multiset#include <bits/stdc++.h>

using namespace std;
void print(set<string , int> &s)
{
    for (auto it : s)
    {
        cout << it.lower.bound << it.higher_bound << endl;
    }
}
int main()
{
    int t;
    cin >> t;[i]
    while (t--)
    {
        set<string, int> s;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string c;
            int t;

            cin >> c >> t;
            s.insert(c);z
            c[i] = t;
        }
        print(s);
    }
}