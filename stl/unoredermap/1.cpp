// C++ code to illustrate the method
// unordered_map operator[]
#include <bits/stdc++.h>
using namespace std;

int main()
{
	unordered_map<int, int> sample;

	// Map initialization
	sample = { { 1, 2 }, { 3, 4 }, { 5, 6 } };

	// print element before doing
	// any operations
	for (auto& it : sample)
		cout << it.first << " : " << it.second << endl;
 cout<<endl;
	// existing element is read
	int m = sample[1];

	// existing element is written
	sample[3] = m;

	// existing elements are accessed
	sample[5] = sample[1];

	// non existing element
	// new element 25 will be inserted
	m = sample[25];

	// new element 10 will be inserted
	sample[5] = sample[10];

	// print element after doing
	// operations
	for (auto& it : sample)
		cout << it.first << " : " << it.second << endl;
	return 0;
}
