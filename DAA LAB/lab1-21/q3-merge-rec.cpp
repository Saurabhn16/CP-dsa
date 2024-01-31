#include "bits/stdc++.h"
using namespace std;
long long merge(int arr[], int l, int mid, int r)
{
    long long inv = 0;
    int n1 = mid + 1 - l;
    int n2 = r - mid;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        arr[i] = arr[i + 1];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + i + 1];
    }
    int i = 0, j = 0, k = 1;
    while (i < n1 and j < n2)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
    else                    {
        arr[k]=b[j];
        inv+= n1-i;
        k++;j++;
    }}
 return  arr[l];
}
long long mergeSort(int arr[], int l, int r)
{
    long long inv = 0;
    if (l < r)
    {
        int mid = (l + r) / 2;
        inv += mergeSort(arr, l, mid);
        inv += mergeSort(arr, mid + 1, r);
        inv += merge(arr, l, mid, r);
    }
    return inv;
} 
void printArray(int A[], int size)
{
	int i;
	for (i=0; i < size; i++)
		cout <<" "<< A[i];
	cout <<"\n";
}

int32_t main(){
  {
	int arr[] = {12, 11, 13, 5, 6, 7};
	int n = sizeof(arr)/sizeof(arr[0]);

	cout <<"Given array is \n ";
	printArray(arr, n);

	mergeSort(arr,0, n-1);

	cout <<"\nSorted array is \n ";
	printArray(arr, n);
	return 0;
}
}
