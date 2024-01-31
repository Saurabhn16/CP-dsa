#include <bits/stdc++.h>
using namespace std;
int a[2];
int max(int a, int b) { return (a > b) ? a : b; }

int knapSack(int W, int pg[], int bp[], int n)
{
 int  ct=1;
    if (n == 0 || W == 0)
    {
        return 0;
        ct++;
    }
    if (pg[n - 1] > W)
    {
        return knapSack(W, pg, bp, n - 1);
        ct++;
    }
    else
    {
        return max(
            bp[n - 1] + knapSack(W - pg[n - 1], pg, bp, n - 1),
            knapSack(W, pg, bp, n - 1));
        ct++;
    }
    a[1]=ct;
}

int main()
{
    int n, W;
    cin >> n >> W;
    int bp[n], pg[n];
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> pg[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> bp[i];
    }

    cout << " max pages" << knapSack(W, pg, bp, n) << endl;
    cout << "Max BOOK " << a[1]<< endl;
    
    return 0;
}
