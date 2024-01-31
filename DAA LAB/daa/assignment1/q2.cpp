#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // generate the new element which contains the unique elements of the array
    int new_arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=0;j<count;j++){
            if(arr[i]==new_arr[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            new_arr[count]=arr[i];
            count++;
        }
    }
    // count the frequency of each element in the new array
    int freq[count];
    for(int i=0;i<count;i++){
        freq[i]=0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<count;j++){
            if(arr[i]==new_arr[j]){
                freq[j]++;
                break;
            }
        }
    }
    // sort the new array in descending order of frequency
    for(int i=0;i<count;i++){
        for(int j=i+1;j<count;j++){
            if(freq[i]<freq[j]){
                int temp=freq[i];
                freq[i]=freq[j];
                freq[j]=temp;
                temp=new_arr[i];
                new_arr[i]=new_arr[j];
                new_arr[j]=temp;
            }
        }
    }
    // print the new array
    for(int i=0;i<count;i++){
        cout<<new_arr[i]<<" ";
    }
    return 0;
}