// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to find all the local maxima
// and minima in the given array arr[]
void findLocalMaximaMinima(int n, int arr[])
{
	
	// Empty vector to store points of
	// local maxima and minima
	vector<int> mx, mn;

	// Checking whether the first point is
	// local maxima or minima or none
	if (arr[0] > arr[1])
		mx.push_back(0);

	else if (arr[0] < arr[1])
		mn.push_back(0);

	// Iterating over all points to check
	// local maxima and local minima
	for(int i = 1; i < n - 1; i++)
	{
		
	// Condition for local minima
	if ((arr[i - 1] > arr[i]) and
		(arr[i] < arr[i + 1]))
		mn.push_back(i);
		
	// Condition for local maxima
	else if ((arr[i - 1] < arr[i]) and
				(arr[i] > arr[i + 1]))
		mx.push_back(i);
	}

	// Checking whether the last point is
	// local maxima or minima or none
	if (arr[n - 1] > arr[n - 2])
		mx.push_back(n - 1);

	else if (arr[n - 1] < arr[n - 2])
		mn.push_back(n - 1);

	// Print all the local maxima and
	// local minima indexes stored
	if (mx.size() > 0)
	{
		cout << "Points of Local maxima are : ";
		for(int a : mx)
		cout << a << " ";
		cout << endl;
	}
	else
		cout << "There are no points of "
			<< "Local Maxima \n";

	if (mn.size() > 0)
	{
		cout << "Points of Local minima are : ";
		for(int a : mn)
		cout << a << " ";
		cout << endl;
	}
	else
		cout << "There are no points of "
			<< "Local Minima \n";
}

// Driver Code
int main()
{
	int N = 9;

	// Given array arr[]
	int arr[] = { 10, 20, 15, 14, 13,
				25, 5, 4, 3 };

	// Function call
	findLocalMaximaMinima(N, arr);
	return 0;	
}

// This code is contributed by himanshu77
