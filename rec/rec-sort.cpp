
#include <iostream>
using namespace std;
bool sorted(int arr[], int n)
{
    if (n == 1)
    {
        return 1;
    }
    bool restArray = sorted(arr + 1, n - 1);
    return (arr[0] < arr[1] && restArray);
}

int main()
{
    int n = 7;

    int arr[n] = {4, 1, 2, 1, 2, 5, 2, 7};

  cout<<sorted(arr,n);

    return 0;
}