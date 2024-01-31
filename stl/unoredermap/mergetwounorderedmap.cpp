// C++ code to illustrate the method
// unordered_map::operator=()
#include <bits/stdc++.h>
using namespace std;

// merge function
template <class T>
T merge(T a, T b)
{
	T t(a);
	t.insert(b.begin(), b.end());
	return t;
}

int main()
{
	unordered_map<int, int> sample1, sample2, sample3;

	// List initialization
	sample1 = { { 1, 2 }, { 3, 4 }, { 5, 6 } };
	sample2 = { { 7, 8 }, { 9, 10 }, { 11, 12 } };
	// Merge both lists
	sample3 = merge(sample1, sample2);

	// copy assignment

	// Print the unordered_map list
	for (auto& it : sample1)
		cout << it.first << " : " << it.second << endl;
 cout<<endl;
 	sample1 = sample3;

	for (auto& it : sample2)
		cout << it.first << " : " << it.second << endl;
cout<<endl;
	for (auto& it : sample3)
		cout << it.first << " : " << it.second << endl;
	return 0;
}
