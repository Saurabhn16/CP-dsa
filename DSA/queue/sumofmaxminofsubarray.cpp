// C++ program to find sum of all minimum and maximum
// elements Of Sub-array Size k.
#include<bits/stdc++.h>
using namespace std;

// Returns sum of min and max element of all subarrays
// of size k
int SumOfKsubArray(int arr[] , int n , int k)
{
	int sum = 0; // Initialize result

	// The queue will store indexes of useful elements
	// in every window
	// In deque 'mini' we maintain decreasing order of
	// values from front to rear
	// In deque 'maxi' we maintain increasing order of
	// values from front to rear
	deque< int > maxi(k), mini(k);

	// Process first window of size K
	int i = 0;
	for (i = 0; i < k; i++)
	{
		// Remove all previous greater elements
		// that are useless.
		while ( (!maxi.empty()) && arr[maxi.back()] >= arr[i])
			maxi.pop_back(); // Remove from rear

		// Remove all previous smaller that are elements
		// are useless.
		while ( (!mini.empty()) && arr[mini.back()] <= arr[i])
			mini.pop_back(); // Remove from rear

		// Add current element at rear of both deque
		mini.push_back(i);
		maxi.push_back(i);
	}

	// Process rest of the Array elements
	for ( ; i < n; i++ )
	{
		// Element at the front of the deque 'mini' & 'maxi'
		// is the largest and smallest
		// element of previous window respectively
		sum += arr[maxi.front()] + arr[mini.front()];

		// Remove all elements which are out of this
		// window
		while ( !maxi.empty() && maxi.front() <= i - k)
			maxi.pop_front();
		while ( !mini.empty() && mini.front() <= i - k)
			mini.pop_front();

		// remove all previous greater element that are
		// useless
		while ( (!maxi.empty()) && arr[maxi.back()] >= arr[i])
			maxi.pop_back(); // Remove from rear

		// remove all previous smaller that are elements
		// are useless
		while ( (!mini.empty()) && arr[mini.back()] <= arr[i])
			mini.pop_back(); // Remove from rear

		// Add current element at rear of both deque
		mini.push_back(i);
		maxi.push_back(i);
	}

	// Sum of minimum and maximum element of last window
	sum += arr[maxi.front()] + arr[mini.front()];

	return sum;
}

// Driver program to test above functions
int main()
{
	int arr[] = {2, 5, -1, 7, -3, -1, -2} ;
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 3;
	cout << SumOfKsubArray(arr, n, k) ;
	return 0;
}
