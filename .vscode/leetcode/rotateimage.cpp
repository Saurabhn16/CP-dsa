#include <iostream>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int matrix[n][n];

        int i, j;

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {

                cin >> matrix[i][j];
            }
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << matrix[i][j] << "  ";
            }

            cout << endl;
        }

        cout << endl;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < i+1; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << i << j << "  " << matrix[i][j] << "  ";
            }

            cout << endl;
        }
        cout << endl;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n/2; j++)
            {
                swap(matrix[i][j], matrix[i][n-j-1]);
            }
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << matrix[i][j] << "  ";
            }
            cout << endl;
        }
        cout << endl;
    }
}