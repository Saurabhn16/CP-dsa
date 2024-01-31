
#include <bits/stdc++.h>
using namespace std;

int GcdOfArray(vector<long long> &arr, int idx)
{
	if (idx == arr.size() - 1)
	{
		return arr[idx];
	}
	int a = arr[idx];
	int b = GcdOfArray(arr, idx + 1);
	return __gcd(
		a, b); // __gcd(a,b) is inbuilt library function
}
// Driver Code
int main()
{
	int n, sum;
	cin >> n >> sum;
	vector<long long> arr;

	for (int i = 1; i <= n; i++)
	{
		arr.push_back(i);
	}
	cout << arr;

	for (int k = 1; k <= n; k++)
	{
		GcdOfArray(arr, k);
	}
}
