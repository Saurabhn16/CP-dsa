// return 1 if == m
// return 2 if >m 
// return 0 if < m


int func(int mid, int n, int m)
{
    long long ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * mid;
        if (ans > m) {
          return 2;
        }
    }

    if (ans == m)
    {
        return 1;
    }

    return 0;
}
int NthRoot(int n, int m)
{
    long long low = 1;
    long long high = m;

    while (low <= high)
    {
        long long mid = (low + high) / 2;
        long long mul = func(mid, n, m);
        if (mul == 1)
        {
            return mid;
        }
        else if (mul == 0)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
