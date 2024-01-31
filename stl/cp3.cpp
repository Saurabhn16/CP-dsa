
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		string ar[a];

		for (int i = 0; i < a; i++)
		{
			cin >> ar[i];
		}
		int min = INT_FAST16_MAX;
		for (int i = 0; i < a; i++)
		{
			for (int j = i + 1; j < a; j++)
			{int sum = 0;
				
				for (int k = 0; k < b; k++)
				{
					if (ar[i][k] > ar[j][k])
					{
						sum = sum + ar[i][k] - ar[j][k];
					}

					else
					{
						sum = sum + ar[j][k] - ar[i][k];
					}
				}
				if (sum < min)
				{
					min = sum;
				}
			
			}	
		}cout << min;
		cout << endl;
	}

	return 0;
}