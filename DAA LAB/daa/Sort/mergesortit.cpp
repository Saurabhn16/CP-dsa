//mergesort algorithm to sort an array of size n
#include <iostream>
using namespace std;
void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int n)
{
    int p,l,h,q,i;
    for(p=2;p<n;p=p*2)
    {
        for(i=0;i+p-1<n;i=i+p)
        {
            l=i;
            h=i+p-1;
            q=(l+h)/2;
            merge(arr,l,q,h);
        }
    }
    if(p/2<n)
    {
        merge(arr,0,p/2-1,n-1);
    }
}
void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout << "Given array is " << endl;
    printArray(arr, arr_size);
    mergeSort(arr,  arr_size );
    cout << "Sorted array is " << endl;
    printArray(arr, arr_size);
    return 0;
}