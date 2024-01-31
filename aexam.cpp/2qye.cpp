#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    int t = 1;
    char ch;
    while (t--)
    {
        cin >> n;
        int z = 0;
        vector<long long int> vec;\
        for (int i = 0; i < n; i++)
        {
            int d;
            cin >> d;
            vec.push_back(d);
        }
        sort(vec.begin(), vec.end());
        z = vec[0];
        reverse(vec.begin(), vec.end());
        for (int i = 0; i < n - 1; i++)
        {
            if (vec[i] >= i + 1 && vec[i + 1] < i + 1)
            {
                z = i + 1;
            }
        }
        cout << z << endl;
    }

    return 0;
}