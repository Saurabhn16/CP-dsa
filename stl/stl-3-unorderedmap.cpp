#include <bits/stdc++.h>
using namespace std;
int main()
{
  unordered_map<string, int> mps;
  int n, cnt = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {

    string str;
    cin >> str;
    mps[str]++;
  }
  int q;
  cin >> q;
  while (q--)
  {
    string s;
    cin >> s;
    cout << m[s] << endl;
  }

  return 0;
}