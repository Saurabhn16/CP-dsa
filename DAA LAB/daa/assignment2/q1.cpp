#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int a[], int l, int r, int item)
{
    if (r-l>1)
    {
        int middle = (l + r) / 2;
        if (a[middle] == item)
        {
            return true;
        }
        else if (a[middle] > item)
        {
            binarySearch(a, l, middle, item);
        }
        else if (a[middle] < item)
        {
            binarySearch(a, middle, r, item);
        }
        return false;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        int num=rand()%100000;
        a[i]=num;
    }
    int item=rand()%100000;
    sort(a, a + n);
    bool ans = binarySearch(a, 0, n, item);
    if (ans == true)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}


// time complexity=O(logn)

//space complexity=O(logn)
// total space=O(n)+O(logn)