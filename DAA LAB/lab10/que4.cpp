#include <bits/stdc++.h>
using namespace std;



int max(int a, int b) { if(a>b){
    return a;

} 
else {{return b;}}}


int knapSack(int M, int weights[], int val[], int n)
{
    int i, w;
    vector<vector<int>> Knap(n + 1, vector<int>(M + 1));

    //here we creates a table of n*M;
    for (i = 0; i <= n; i++)
    {
        for (w = 0; w <= M; w++)
        {
            if (i == 0 || w == 0)
                Knap[i][w] = 0;
            else if (weights[i - 1] <= w)
                Knap[i][w] = max(val[i - 1] + Knap[i - 1][w - weights[i - 1]],Knap[i - 1][w]);
            else
                Knap[i][w] = Knap[i - 1][w];
        }
    }
    return Knap[n][M];
}


int main()
{
    int profit[] = {3, 6, 1,4};
    int weight[] = {6,1,5,3};
    int M = 10;
    int n = sizeof(profit) / sizeof(profit[0]);

    cout <<"The Maximum profit is : "<<knapSack(M, weight, profit, n);

    return 0;
}
