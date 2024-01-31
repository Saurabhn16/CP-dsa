#include <bits/stdc++.h>
using namespace std;

int lcs(string X, string Y, int m, int n)
{
    int thrid[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                thrid[i][j] = 0;

            else if (X[i - 1] == Y[j - 1])
                thrid[i][j] = thrid[i - 1][j - 1] + 1;

            else
                thrid[i][j] = max(thrid[i - 1][j], thrid[i][j - 1]);
        }
    }

    return thrid[m][n];
}

void solve(string first, string second, string third)
{
    int bc = lcs(second, third, second.size(), third.size());
    int ac = lcs(first, third, first.size(), third.size());

    if (bc + ac == third.size())
    {
        cout << "Valid one ";
        return;
    }
    cout << "Invalid  one ";
}

int main()
{ 

    string first, second, third;
    cin >> first;
    cin >> second;
    cin >> third;

    solve(first, second, third);

    return 0;
}