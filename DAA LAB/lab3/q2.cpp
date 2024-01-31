// selection sort
#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++)
    {

        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        if (min_idx != i)
            swap(&arr[min_idx], &arr[i]);
    }
}

void selectionSort1(int arr[], int n)
{
    int i, j, max_idx;

    for (i = 0; i < n - 1; i++)
    {

        max_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] > arr[max_idx])
                max_idx = j;

        if (max_idx != i)
            swap(&arr[max_idx], &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array min : \n";
    printArray(arr, n);
      selectionSort1(arr, n);
       cout << "Sorted array max: \n";
    printArray(arr, n);
    return 0;
}
