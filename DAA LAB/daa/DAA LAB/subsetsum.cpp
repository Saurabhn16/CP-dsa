#include <bits/stdc++.h>
using namespace std;

//creating a global matrix
int arr[2000][2000];

// function to check whether subset with given sum is present or not
int subsetSum(int a[], int n, int sum)
{
	if (sum == 0)
		return 1;     //subset with given sum is present
		
	if (n <= 0)
		return 0;     //subset with given sum is abset

	if (arr[n - 1][sum] != -1)
		return arr[n - 1][sum];
	
	//if call of a[n-1] is greater than sum then return the following value
	if (a[n - 1] > sum)
		return arr[n - 1][sum] = subsetSum(a, n - 1, sum);
	else
	{
		// 2 calls are initiated here since we do not know which condition could be true.
		return arr[n - 1][sum] = subsetSum(a, n - 1, sum) || subsetSum(a, n - 1, sum - a[n - 1]);
	}
}

int main()
{
	//initializing the matrix with -1 or any other negative value.
	memset(arr, -1, sizeof(arr));
	int n = 5;
	int a[] = {1, 5, 3, 7, 4};
	int sum = 12;

	if (subsetSum(a, n, sum))
	{
		cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;
}