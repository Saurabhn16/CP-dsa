// A C++ program to find a local minima in an array
#include <stdio.h>

// A binary search based function that returns
// index of a local minima.
int localMinUtil(int arr[], int low, int high, int n)
{
	// Find index of middle element
	int mid = low + (high - low)/2; /* (low + high)/2 */

	// Compare middle element with its neighbours
	// (if neighbours exist)
	if ((mid == 0 || arr[mid-1] > arr[mid]) &&
			(mid == n-1 || arr[mid+1] > arr[mid]))
		return mid;

	// If middle element is not minima and its left
	// neighbour is smaller than it, then left half
	// must have a local minima.
	else if (mid > 0 && arr[mid-1] < arr[mid])
		return localMinUtil(arr, low, (mid -1), n);

	// If middle element is not minima and its right
	// neighbour is smaller than it, then right half
	// must have a local minima.
	return localMinUtil(arr, (mid + 1), high, n);
}

// A wrapper over recursive function localMinUtil()
int localMin(int arr[], int n)
{
	return localMinUtil(arr, 0, n-1, n);
}

/* Driver program to check above functions */
int main()
{
	int arr[] = {4, 3, 1, 14, 16, 40};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Index of a local minima is %d",
						localMin(arr, n));
	return 0;
}
