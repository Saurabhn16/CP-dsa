#include <bits/stdc++.h>
using namespace std;

int cal(const std::vector<int> &v, int t)
{
    int sum = 0;
    int ct = 1;

    for (int i = 0; i < v.size(); i++)
    {
        if (sum + v[i] >t)
        {
            ct++;
            sum = v[i];
        }
        else
        {
            sum += v[i];
        }

    
    }
  
    return ct;
}
int leastWeightCapacity(vector<int> &v, int h)
{
    int sum = 0;

    int high = std::accumulate(v.begin(), v.end(), 0);
      int low = *std::max_element(v.begin(), v.end());
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
int main()
{

    int n;
    std::cin >> n;

    std::vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> v[i];
    }

    int h;
    std::cin >> h;

    int minCapacity = leastWeightCapacity(v, h);

    std::cout << "Minimum Weight Capacity: " << minCapacity << std::endl;

    return 0;
}