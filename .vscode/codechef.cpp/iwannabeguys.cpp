#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int hsh[t + 1];
     for (int i = 0; i <= t; i++)
    {
        hsh[i] = 0;
    }

    int a;
    cin >> a;
    int b[a];
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
        int k = b[i];
        hsh[k]++;
    }
    int c;
    cin >> c;
    int d[c];
    for (int i = 0; i < c; i++)
    {
        cin >> d[i];
        int k = d[i];
        hsh[k]++;
    }
    int p = 1;
    for (int i = 1; i <= t; i++)
    {
        // cout << hsh[i] << " ";
        if (hsh[i] == 0)
        {
            p = 0;
        }
        hsh[i] = 0;
    }

    if (p == 1)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
    return 0;
}