#include <bits/stdc++.h>
using namespace std;
#define for1(a, b) for (auto i = a; i < b; ++i)
#define for2(a, b) for (auto i = a; i >= b; --i)
void countSort(int arr[][2], int n)
{
    int cnt[61];
    for1(0, 61)
        cnt[i] = 0;
    for1(0, n)
        cnt[arr[i][1]]++;
    for1(1, 61)
        cnt[i] += cnt[i - 1];
    int result[n][2];
    for1(0, n)
    {
        result[cnt[arr[i][1]] - 1][0] = arr[i][0];
        result[cnt[arr[i][1]] - 1][1] = arr[i][1];
        cnt[arr[i][1]]--;
    }
     cout<<"sorted leaves"<<endl;
    for (int i = n - 1; i >= 0; i--)
    {
        if (result[i][1] == 0)
            cout << result[i][0] << "-00" << endl;
        else
            cout << result[i][0] << "-" << result[i][1] << endl;
    }
}

int main()
{ cout<<"NO of emoloyes"<<endl;
    int n;
    cin >> n;
    int arr[n][2];
    for1(0, n)
    { cout<<"Emploeye no  leaves";
        cin >> arr[i][0] >> arr[i][1];
    }
    countSort(arr, n);
    return 0;
}