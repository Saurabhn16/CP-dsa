int findMin(vector<int> &arr)
{
    int low = 0;
    int high = arr.size() - 1;
    int ans = INT_MAX; // Initialize ans with maximum value instead of INT_MIN

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // if (arr[low] == arr[mid] && arr[mid] == arr[high])
        // {
        //     ans = min(ans, arr[low]);
        //     low = low + 1;
        //     high = high - 1;
        //     continue;
        // }

        if (arr[low] <= arr[high])
        {
            ans = min(ans, arr[low]);
            break;
        }

        if (arr[low] <= arr[mid])
        {

            low = mid + 1;
            ans = min(ans, arr[low]);
        }
        else
        {
            high = mid - 1;
            ans = min(ans, arr[mid]);
        }
    }

    return ans;
}
