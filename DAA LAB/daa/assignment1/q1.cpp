#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high,int *t)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {

        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
        *t=*t+1;
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high,int *t)
{
    if (low < high)
    {

        int pi = partition(arr, low, high,t);

        quickSort(arr, low, pi - 1,t);
        quickSort(arr, pi + 1, high,t);
    }
    *t=*t+1;
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
    int n;
    cin>>n;
    int arr[n];
    int t=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr, 0, n - 1,&t);
    cout << "Sorted array: \n";
    printArray(arr, n);
    cout<<t;
    return 0;
}