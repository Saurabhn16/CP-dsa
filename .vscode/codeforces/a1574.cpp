// C++ program to check for balanced brackets.

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		string b = "()";
		for (int i = 1; i <= n; i++)
		{
			for (int j =n ; j >n-i; j--)
			{
				cout << b[0];
			}
			for (int j = n; j >n-i; j--)
			{
				cout << b[1];
			}for (int j = i; j <n; j++)
			{
				cout << b[0]<<b[1];
			}
			cout<<endl;
			
		}
	
		cout << endl;
	}
	return 0;
}
