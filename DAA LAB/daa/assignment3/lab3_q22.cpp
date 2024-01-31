#include <bits/stdc++.h>
using namespace std;

void heapify(int a[],int n,int i){
    int large=i;
    int left =2*i+1;
    int right=2*i+2;
    if(left<n&&a[left]>a[large]){
        large=left;
    }
    if(right<n&&a[right]>a[large]){
        large=right;
    }
    if(large!=i){
        swap(a[i],a[large]);
        heapify(a,n,large);
    }

}
void heapSort(int a[],int n){
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);
    for (int i = n - 1; i >= 0; i--) {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=n/2 -1;i>=0;i--){
       heapify(a,n,i);
   }
   heapSort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}


//time complexity--> O(nlogn)