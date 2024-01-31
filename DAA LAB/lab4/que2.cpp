#include <bits/stdc++.h>
using namespace std;

// Merge Sort Complexity:
// Worst complexity: O(n*log(n))
// Average complexity: O(n*log(n))
// Best complexity: O(n*log(n))
// Space complexity: O(n)

// Time Complexity for comparing given array with sorted array: O(n)

// Time Complexity for algorithm: Time Complexity of Merge Sort + Time Complexity of Comparing
// O(nlogn) + O(n): O(nlogn)

// Space Complexity of algorithm: O(n)

void merge(int a[], int f, int mid, int l)
{
    int i = f, j = mid + 1, b[5], k = f;
    while (i <= mid && j <= l)
    {
        if (a[i] > a[j])
        {
            b[k] = a[j];
            k++;
            ++j;
        }
        else
        {
            b[k] = a[i];
            k++;
            ++i;
        }
    }
    while (j <= l)
    {
        b[k] = a[j];
        ++j;
        k++;
    }
    while (i <= mid)
    {
        b[k] = a[i];
        ++i;
        k++;
    }
    for (int i = f; i <= l; ++i)
        a[i] = b[i];
}

void mergeSort(int a[], int f, int l)
{
    int mid = -1;
    if (l > f)
    {
        mid = (l + f) / 2;
        mergeSort(a, f, mid);
        mergeSort(a, mid + 1, l);
        merge(a, f, mid, l);
    }
}

int main()
{ 
   int n;
    cin>>n;
    int arr[n];
    int maxm = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        maxm = max(maxm,arr[i]);
    }
    int ct[maxm+1];
    
    for(int i=0;i<(maxm+1);i++){
        ct[i]=0;
    }
    for(int i=0;i<n;i++){
        ct[arr[i]]++;
    }
    for(int i=1;i<n;i++){
        ct[i]=ct[i-1]+ct[i];
    }
    int pos[n];
    for(int i=n-1;i>=0;i--){
        int in = arr[i];
        int j = ct[in]-1;
        pos[j]=arr[i];
        ct[in]--;
    }
    int c=0;
    for(int i=0;i<n;i++){
        if(pos[i]!=arr[i]) c++;
    }
    cout<<c<<endl;
    return 0;
}