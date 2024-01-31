#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(int arr[], int n)
{
    // Return, if array is empty or contains a single
    // element
    if (n == 0 || n == 1)
        return n;
 
    int temp[n];
 
    // Start traversing elements
    int j = 0;
    // If current element is not equal to next element
    // then store that current element
    for (int i = 0; i < n - 1; i++)
        if (arr[i] != arr[i + 1])
            temp[j++] = arr[i];
 
    // Store the last element as whether it is unique or
    // repeated, it hasn't stored previously
    temp[j++] = arr[n - 1];
 
    // Modify original array
    for (int i = 0; i < j; i++)
        arr[i] = temp[i];
 
    return j;
}
int main()
{
	int t;
	cin >> t;
	string s;
	cin >> s;
	set
	int a[t]={};
	for (int i = 0; i < t; i++)
	{  int temp =0,temp1=0;
		 temp = s[i] - 'a';
		 temp1 = s[i] - 'A';
		if (0 <= temp && temp <= 26)
		{
			a[temp] = temp;
	
		}
		if (0 <= temp1 && temp1 <= 26)
		{
			a[temp1] = temp1;
			
		}
	}sort(a,a+t);
removeDuplicates( a, t);

	for (int  i = 0; i <26; i++)
	{
	 cout<<a[i]<<endl;
	}
	
}

