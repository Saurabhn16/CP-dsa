#include <iostream>
using namespace std;
long long  linearSearch(long long  arr[], long long  n, long long key)
{
    if (n == 0)
        return -1;
    if (arr[n - 1] == key)
        return n - 1;
    return linearSearch(arr, n - 1, key);
}
int main()
{

    long long n, k;
    cin >> n >> k;
    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
        arr[i] = rand() % n;
        cout << arr[i] << " ";
    }
    long long  index = linearSearch(arr, n, k);
    if (index == -1)
        cout << "Element not found";
    else
        cout << "Element found at index " << index;
    return 0;
}