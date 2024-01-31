#include<bits/stdc++.h>
using namespace std;

#define MAX 9999

int n=4; // Number of the places want to visit

 //Next distan array will give Minimum distance through all the position
int distan[10][10] = {                
                    {0, 10, 15, 20},
                    {10, 0, 35, 25},
                    {15, 35, 0, 30},
                    {20, 25, 30, 0}
};
int completed_visit = (1<<n) -1;

int DP[16][4];


int  TSP(int mark,int position){

  if(mark==completed_visit){      // Initially checking whether all
                                  // the places are visited or not
    return distan[position][0];
  }
  if(DP[mark][position]!=-1){
     return DP[mark][position];
  }

  //Here we will try to go to every other places to take the minimum
  // answer
  int answer = MAX;

  //Visit rest of the unvisited cities and mark the . Later find the 
  //minimum shortest path
  for(int city=0;city<n;city++){

    if((mark&(1<<city))==0){

      int newAnswer = distan[position][city] + TSP( mark|(1<<city),city);
      answer = min(answer, newAnswer);
    }

  }

  return DP[mark][position] = answer;
}

int main(){
    /* initialize the DP array */
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            DP[i][j] = -1;
        }
    }
  cout<<"Minimum Distance Travelled by you is "<<TSP(1,0);

return 0;
}

//Time complexity: O(n^2 * 2^n)