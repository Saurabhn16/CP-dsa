#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {-1, 2, 3};

    cout << all_of(v.begin(), v.end(), 
    [](int x){ return x > 0; })<<endl;
    
    cout << any_of(v.begin(), v.end(), 
    [](int x){ return x > 0; })<<endl;
    
    cout << none_of(v.begin(), v.end(), 
    [](int x){ return x > 0; })<<endl;
}