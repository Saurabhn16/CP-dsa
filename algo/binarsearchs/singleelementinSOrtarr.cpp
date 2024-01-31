int singleNonDuplicate(vector<int> &a)
{
    int n = a.size();
    if (n == 1)
    {
        return a[0];
    }
    if (a[0] != a[1])
    {
        return a[0];
    }
    if (a[n - 1] != a[n - 2])
    {
        return a[n - 1];
    }
    int l = 1;
    int r = n - 2;
    while (l <= r)
    {
        int mid =  (r + l) / 2;
        if (a[mid] != a[mid - 1] && a[mid] != a[mid + 1])
        {
            return mid;
        }
        if ((a[mid] == a[mid + 1] && mid % 2 == 0) ||
            (a[mid] == a[mid - 1] && mid % 2 == 1)
            )
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1; // If no single non-duplicate element is found, return -1 or any appropriate value
}
