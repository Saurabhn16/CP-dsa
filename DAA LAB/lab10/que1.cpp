#include <iostream>
#include <climits>

using namespace std;

const int MAXN = 5; 
const int MAXS = 3; 

int cost[MAXN][MAXN] = 
    {{0, 1, 1, 1, 0},
     {1, 0, 0, 0, 1},
     {1, 0, 0, 0, 1},
     {1, 0, 0, 0, 1},
     {1, 0, 0, 0, 1}

};

int dp[MAXS][MAXN];\

int main()
{

    for (int i = 0; i < MAXN; i++)
    {
        dp[MAXS - 1][i] = cost[i][MAXN - 1];
    }

   
    for (int s = MAXS - 2; s >= 0; s--)
    {
        for (int i = 0; i < MAXN; i++)
        {
            int min_cost = INT_MAX;
            for (int j = 0; j < MAXN; j++)
            {
                if (cost[i][j] > 0)
                {
                    min_cost = min(min_cost, cost[i][j] + dp[s + 1][j]);
                }
            }
            dp[s][i] = min_cost;
        }
    }

    
    cout << "Minimum cost from city 1 to city  "<<MAXN<<" :" << dp[0][0] << endl;

    return 0;
}
