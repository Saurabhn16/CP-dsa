#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int>> &M, int n)
    {
        stack<int> s;

        // Push all people onto the stack
        for (int i = 0; i < n; i++)
        {
            s.push(i);
        }

        while (s.size() > 1)
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();

            // If a knows b, 'a' cannot be the celebrity, push 'b' back
            if (M[a][b] == 1)
            {
                s.push(b);
            }
            // If a doesn't know b, 'b' cannot be the celebrity, push 'a' back
            else
            {
                s.push(a);
            }
        }

        int potentialCelebrity = s.top();
        s.pop();

        // Check if the potential celebrity knows anyone or if someone doesn't know the potential celebrity
        for (int i = 0; i < n; i++)
        {
            if (i != potentialCelebrity && (M[i][potentialCelebrity] == 0 || M[potentialCelebrity][i] == 1))
            {
                return -1; // No celebrity found
            }
        }

        return potentialCelebrity;
    }
    
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> M(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M, n) << endl;
    }
    return 0;
}
