#include <bits/stdc++.h>
using namespace std;

void mul(int A[][16],int B[][16],int n){
    int i=0,j=0,k=0;
    
}

int main() {
	int A[16][16];
	int B[16][16];
    for(int i=0;i<16;i++){
        for(int j=0;j<16;j++){
            A[i][j]=rand()%10;
        }
    }
    for(int i=0;i<16;i++){
        for(int j=0;j<16;j++){
            B[i][j]=rand()%10;
        }
    }
    mul(A,B,16);
	return 0;
}