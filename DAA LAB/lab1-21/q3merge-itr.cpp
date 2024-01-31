
#include <iostream>
#include <algorithm>

using namespace std;
int count1=0,count2=0, sp1=0,sp2=0;

void merge_itr(int * arr, int l, int m, int r){
    int n1 = m-l+1;
    int n2 = r-m;
    int L[n1],R[n2];
    
    for(int i=0;i<n1;i++){
        L[i] = arr[l+i];
    }
    for(int i=0;i<n2;i++){
        R[i] = arr[m+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        count2++;
        if(L[i]<=R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        count2++;
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2){
        count2++;
        arr[k] = R[j];
        j++;
        k++;
    }
}
void merge_rec(int * arr, int l, int m, int r){
    int n1 = m-l+1;
    int n2 = r-m;
    int L[n1],R[n2];
    
    for(int i=0;i<n1;i++){
        L[i] = arr[l+i];
    }
    for(int i=0;i<n2;i++){
        R[i] = arr[m+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        count1++;
        if(L[i]<=R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        count1++;
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2){
        count1++;
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int* arr, int l, int r){
    if(l<r){
        int m = l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        sp1+=(m-l)*2;
        merge_rec(arr,l,m,r);
    }
}
void mergeSort_itr(int arr[], int n)
{
int c; 

int l; 
		

for (c=1; c<=n-1; c = 2*c)
{
	for (l=0; l<n-1; l += 2*c)
	{
		int m = min(l + c - 1, n-1);

		int right_end = min(l + 2*c - 1, n-1);
        sp2+=c*2;
		merge_itr(arr, l, m, right_end);
	}
}
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    int arr2[n];
    
    for(int i=0; i<n; i++)cin>>arr[i];
    for(int i=0; i<n; i++)arr2[i]=arr[i];
  
    mergeSort_itr(arr,n);
    mergeSort(arr2,0,n-1);
    cout<<"Iterative: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Recursive: ";
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }


    
cout<<"Iterative calls: "<<count2<<endl;
cout<<"Recursive calls: "<<count1<<endl;
cout<<"Iterative calls space: "<<sp2<<endl;
cout<<"Recursive calls space: "<<sp1<<endl;
    return 0;
}