#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "Tetrahedron";
    string b = "Cube";
    string c = "Dodecahedron";
    string d = "Octahedron";
    string e = "Icosahedron";
    long long t;
    int sum = 0;
    cin >> t;
    for (long long i = 0; i < t; i++)
    {
   

    
        string s;
        cin >> s;
        if (s == a)
        {
            sum += 4;
        }
        if (s == b)
        {
            sum += 6;
        }
        if (s == c)
        {
            sum += 12;
        }
        if (s == d)
        {
            sum += 8;
        }
        if (s == e)
        {
    
            sum += 20;
        }
        // cout<<sum<<endl;
    }
    cout << sum;

    return 0;
}