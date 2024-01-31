int mostFrequent(int arr[], int n)
{
    // Insert all elements in hash.
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;

    // find the max frequency
    int max_count = 0, res = -1;
    for (auto i : hash)
    {
        if (max_count < i.second)
        {
            res = i.first;
            max_count = i.second;
        }
    }

    return res;
}
