#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;int weight;int  count = 0;
    int sum = 0;
    cin >> n >> weight;
    vector<int> weights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> weights[i];
    }
    sort(weights.begin(), weights.end());
    int l = 0;
    int r = n - 1;
    while (l < r)
    {
        sum = weights[l];

        while (l <= r)
        {

            sum += weights[r];
            if (sum > weight)
            {

                sum -= weights[r];
                count++;
                l++;

                sum = 0;
                break;
            }
            else
            {

                r--;
            }
        }
    }

    cout << count << endl;

    return 0;
}