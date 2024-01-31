#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long arr[n];
    int b=0;
    for (long long i = 0; i < n; i++)
    {
        arr[i] = rand() % n;
        cout << arr[i] << " ";
    }

    bool search = false;

    for (long long i = 0; i < n; i++)
    {
        if (arr[i] == k)
        { b=i;
            search = true;
        }
    }
    cout << endl;
    if (search == 0)
    { 
        cout << "Element not found";
    }
    else
    {
        cout << "Element found at index "<<b;
    }


    return 0;
}