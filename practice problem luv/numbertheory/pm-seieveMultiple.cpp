#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N =2e6+10;
int a[N];
int hp[N];
int canRemove[N];
int hsh[N];
vector<int> distinctPF(int x)
{
    vector<int> ans;
    while (x > 1)
    {
        int pf = hp[x];
        while (x % pf == 0)
        {
            x /= pf;
        }
        ans.push_back(pf);
    }
    return ans;
}
signed main()
{
    for (int i = 2; i < N; i++)
    {
        if (hp[i] == 0)
        {
            for (int j = i; j < N; j += i)
            {
                hp[j] = i;
            }
            
        }
    }

    long long n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        hsh[d] = 1;
    }
    for (int i = 2; i < N; i++)
    {
        if (hsh[i])
        {
            for (long long  j = i; j < N; j *= i)
            {
                canRemove[j]=1;
          
            }

        }
    }

    while (m--)
    {
        int x;
        cin >> x;
        bool isPossible = false;
        vector<int> pf = distinctPF(x);
        for (int i = 0; i < pf.size(); i++)
        {
            for (int j = i; j < pf.size(); j++)
            {
                int product = pf[i] * pf[j];
                if ((i == j) && (x % product != 0))
                    {continue;}
                int toRemove = x / product;
                if (canRemove[toRemove] == 1|| toRemove==1)
                {
                    isPossible = true;
                    break;
                }
            }
            if (isPossible)
               { break;}
        }
      cout<<(isPossible?"YES\n":"NO\n");   
    }
    return 0;
} 
