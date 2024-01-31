bool canWePlace(vector<int> &v, int dist, in cows)
{
    int cntCows = 1;
    int last = vec[0];
    for (int i = 0; i < vec.size(); i++)
    {
        if (stalls[i] - lasts >= dist)
        {
            cntCows++;
            last = stalls[i];
        }
        if (cntCows >= cows)
        {
            return true;
        }
    }
    return false;
}

int aggressiveCows(vector<int> &vec, int k)
{
    sort(vec.begin(), vec.end());

    int low = 0;
    int high = vec[n - 1] - vec[0];
    while (low <= high)
    {

        int mid = (low + high) / 2;

        if (canWePlace(arr, mid, cows))
        {
            ans = mid
                low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return high;
}
