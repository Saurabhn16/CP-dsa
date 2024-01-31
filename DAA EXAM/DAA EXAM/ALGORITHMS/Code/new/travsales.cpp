// #include <iostream>
 
// using namespace std;
 
// // there are four nodes in example graph (graph is 1-based)
// const int n = 4;
// // give appropriate maximum to avoid overflow
// const int MAX = 1000000;
 
// // dist[i][j] represents shortest distance to go from i to j
// // this matrix can be calculated for any given graph using
// // all-pair shortest path algorithms
// int dist[n + 1][n + 1] = {
//     { 0, 0, 0, 0, 0 },    { 0, 0, 10, 15, 20 },
//     { 0, 10, 0, 25, 25 }, { 0, 15, 25, 0, 30 },
//     { 0, 20, 25, 30, 0 },
// };
 
// // memoization for top down recursion
// int memo[n + 1][1 << (n + 1)];
 
// int fun(int i, int mask)
// {
//     // base case
//     // if only ith bit and 1st bit is set in our mask,
//     // it implies we have visited all other nodes already
//     if (mask == ((1 << i) | 3))
//         return dist[1][i];
//     // memoization
//     if (memo[i][mask] != 0)
//         return memo[i][mask];
 
//     int res = MAX; // result of this sub-problem
 
//     // we have to travel all nodes j in mask and end the
//     // path at ith node so for every node j in mask,
//     // recursively calculate cost of travelling all nodes in
//     // mask except i and then travel back from node j to
//     // node i taking the shortest path take the minimum of
//     // all possible j nodes
 
//     for (int j = 1; j <= n; j++)
//         if ((mask & (1 << j)) && j != i && j != 1)
//             res = std::min(res, fun(j, mask & (~(1 << i)))
//                                     + dist[j][i]);
//     return memo[i][mask] = res;
// }
// // Driver program to test above logic
// int main()
// {
//     int ans = MAX;
//     for (int i = 1; i <= n; i++)
//         // try to go from node 1 visiting all nodes in
//         // between to i then return from i taking the
//         // shortest route to 1
//         ans = std::min(ans, fun(i, (1 << (n + 1)) - 1)
//                                 + dist[i][1]);
 
//     printf("The cost of most efficient tour = %d", ans);
 
//     return 0;
// }


#include <stdio.h>
 
int ary[10][10], completed[10], n, cost = 0;
 
int least(int c) {
  int i, nc = 999;
  int min = 999, kmin;
 
  for (i = 0; i < n; i++) {
    if ((ary[c][i] != 0) && (completed[i] == 0))
      if (ary[c][i] + ary[i][c] < min) {
        min = ary[i][0] + ary[c][i];
        kmin = ary[c][i];
        nc = i;
      }
  }
 
  if (min != 999)
    cost += kmin;
 
  return nc;
}

void mincost(int city) {
  int i, ncity;
 
  completed[city] = 1;
 
  //printf("%d--->", city + 1);
  ncity = least(city);
 
  if (ncity == 999) {
    ncity = 0;
    printf("%d", ncity + 1);
    cost += ary[city][ncity];
 
    return;
  }
 
  mincost(ncity);
}
 
int main() {
    int n = 4;
    ary[0][0] = 0;
    ary[0][1] = 4;
    ary[0][2] = 1;
    ary[1][0] = 4;
    ary[1][1] = 0;
    ary[1][2] = 2;
    ary[2][0] = 1;
    ary[2][1] = 2;
    ary[2][1] = 0;
    
    int i;
    for(i = 0 ; i < n; i++){
        completed[i] = 0;
    }
    mincost(0);
    printf("%d", cost);
    return 0;
}
