#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int id[n];
    int leaves[n];

    for(int i = 0; i < n; i++){
        cin >> id[i] >> leaves[i];
    }
    int freq[366];
    memset(freq, 0, sizeof(freq));

    for(int i = 0; i < n; i++){
        freq[leaves[i]] += 1;
    }
    for(int i = 1; i < 366; i++){
        freq[i] = freq[i] + freq[i - 1];
    }

    int ansleaves[n];
    int ansemployee[n];
    int k = n - 1;

    for(int i = n - 1; i >= 0; i--){
        int l = leaves[i];
        int pos = freq[l];
        freq[l]--;
        ansemployee[pos - 1] = id[i];
        ansleaves[pos - 1] = leaves[i];
    }

   
    for(int i = n - 1; i >= 0; i--){
        cout << ansemployee[i] << ": " << ansleaves[i] << endl; 
    }

    return 0;
}


//time complexity--O(n)
//space complexity--O(n)