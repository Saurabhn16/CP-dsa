#include <bits/stdc++.h>
using namespace std;

#define N 12
#define I INT_MAX

int shortestDist(int graph[N][N])
{

    int dist[N];

    dist[N - 1] = 0;

    for (int i = N - 2; i >= 0; i--)
    {

        dist[i] = I;

        for (int j = i; j < N; j++)
        {

            if (graph[i][j] == I)
                continue;

            dist[i] = min(dist[i], graph[i][j] +dist[j]);
        }
    }

    return dist[0];
}

int main()
{

    int graph[N][N] =
        {{0, 9, 7, 3, 2, I, I, I, I, I, I, I},
         {9, 0, I, I, I, 4, 2, 1, I, I, I, I},
         {7, I, I, I, I, 2, 7, I, I, I, I, I},
         {3, I, I, 0, I, I, I, 11, I, I, I, I},
         {2, I, I, I, 0, I, 11, 8, I, I, I, I},
         {I, 4, 2, I, I, 0, I, I, 6, 5, I, I},
         {I, 2, 7, I, 11, I, 0, I, 4, 3, I, I},
         {I, 1, I, 11, 8, I, I, 0, I, 5, 6, I},
         {I, I, I, I, I, 6, 4, I, 0, I, I, 4},
         {I, I, I, I, I, 5, 3, 5, I, 0, I, 2},
         {I, I, I, I, I, I, I, 6, I, I, 0, 5},
         {I, I, I, I, I, I, I, I, 4, 2, 5, 0}};

    cout << shortestDist(graph);
    return 0;
}