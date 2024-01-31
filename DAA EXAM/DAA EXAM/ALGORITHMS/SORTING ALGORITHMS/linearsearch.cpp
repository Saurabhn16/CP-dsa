//linear search recurcive ansd iterative
#include <iostream>
using namespace std;
 

int searchElement(int arr[], int size, int x) {
     
    size--;
     
    // Base case mtlb element nhi hai
    if (size < 0) {
        return -1;
    }
    // Base case (Element found, return its position)
    if (arr[size] == x) {
        return size;
    }
 
    
    return searchElement(arr, size, x);
 
}

int main() {
    int arr[] = {17, 15, 11, 8, 13, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 8;
    //recursive call
    int idx = searchElement(arr, size, x);
    cout<<idx;
    cout<<"NON RECURSIVE";
    cout<<endl;
    //NON RECURSIVE WAY
    int p=1;
    int c=0;
    for(int i=0;i<size;i++){
        if(arr[i]==x){
            c=1;
            return p;
        }
        p++;
    }


    
    if (c != 0)
        cout << "Element " << x << " is present in the array " <<p;
    else
        cout << "Element " << x << " is not present in the array";

    cout<<endl;


   cout<<"RECURSIVE"<<endl;


    if (idx != -1)
        cout << "Element " << x << " is present at index " <<idx;
    else
        cout << "Element " << x << " is not present in the array";
    return 0;

    //recursive
    //time complexity : O(n)
    //space complexity: O(n)

     //non-recursive
    //time complexity : O(n)
    //space complexity: O(1)
}
 
