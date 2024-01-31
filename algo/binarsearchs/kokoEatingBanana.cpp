#include <vector>
#include <algorithm>

int cal(const std::vector<int>& v, int t)
{
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % t == 0)
        {
            sum += v[i] / t;
        }
        else
        {
            sum += (v[i] / t) + 1;
        }
    }
    return sum;
}

int minimumRateToEatBananas(const std::vector<int>& v, int h)
{
    int high = *std::max_element(v.begin(), v.end());
    int low = 1;
    int mid = 0;
    
    while (low <= high)
    {
        mid = (low + high) / 2;
        int t = cal(v, mid);
        
        
        if (t > h)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return low;
}
