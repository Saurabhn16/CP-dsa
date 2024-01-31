#include <bits/stdc++.h>
using namespace std;

void merge(int a[],int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++){
        left[i]=a[l+i];
    }
    for(int i=0;i<n2;i++){
        right[i]=a[mid+1+i];
    }
    int i=0,j=0,k=l;

    while(i<n1&&j<n2){
        if(left[i]<=right[j]){
            a[k]=left[i];
            i++;
        }
        else{
            a[k]=right[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        a[k]=left[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=right[j];
        j++;
        k++;
    }

}

void mergeSort(int a[],int l,int r){
    if(l>=r){
        return ;
    }
    int mid=l+(r-l)/2;
    mergeSort(a,l,mid);
    mergeSort(a,mid+1,r);
    merge(a,l,mid,r);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mergeSort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

//time complexity--> O(nlogn)
//space complexity-->O(n) 