#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)

    {

        int p, s;

        cin >> p >> s;

        int count = 0;
        int po = 1;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < p; j++)
            {
                if (i % 2 == 0 && j % 2 == 0 && i == j)
                {

                    count++;
                }
            }
        }
        if (count < s)
        {
            cout << "-1" << endl;
        }
        else
        {
            for (int i = 0; i < p; i++)
            {
                for (int j = 0; j < p; j++)
                {
                    if (i % 2 == 0 && j % 2 == 0 && i == j&&s>0)
                    {
                        cout << "R";
                        s--;
                    }

                    else
                    {
                        cout << ".";
                    }
                }

                cout << endl;
            }
        }
    }
}
