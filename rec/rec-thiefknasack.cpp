#include <iostream>
using namespace std;
int knapsack( int v[], int wt[],int n, int w)
{
    if (n == 0 || w == 0)
    {
        return 0;
    }
    if (wt[n - 1] > w)
    {
        return knapsack(v, wt, n - 1, w);
    }

    return max(knapsack(v, wt, n - 1, w - wt[n - 1] + v[n - 1]), knapsack(v, wt, n - 1, w));
}
int main()
{
    int w = 50;
    int v[] = {100, 50, 150};
    int wt[] = {10, 20, 30};
    cout << knapsack( v, wt ,3, w);

    return 0;
}