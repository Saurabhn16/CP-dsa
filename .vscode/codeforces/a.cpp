#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    //Insert values 1 to 10
    for(int i=1;i<=10;i++)
     {   v.push_back(i);
   } //vector has [1,2,3,4,5,6,7,8,9,10]

    //erase the 7th element
    v.erase(v.begin()+6);

    //erase first 3 elements
    // v.erase(v.begin(),v.begin()+3);

    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    //Prints [4 5 6 8 9 10]
    return 0;
}
