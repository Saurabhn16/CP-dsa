// https://practice.geeksforgeeks.org/problems/top-k-frequent-elements-in-array/1
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> topK(vector<int> &n, int k)
    {
        int l = n.size();
        std::unordered_map<int, int> myMap;
        for (int i = 0; i < l; i++)
        {

            myMap[n[i]]++;
        }
        vector<int> m;

        // Inserting elements into the unordered map

        // Convert the unordered map into a vector of pairs
        std::vector<std::pair<int, int>> vec(myMap.begin(), myMap.end());

        // Sort the vector based on the second value of each pair in descending order
        std::sort(vec.begin(), vec.end(), [](auto &a, auto &b)
                  {
                    if(a.second==b.second){return a.first>b.first;}
                    else{
    return a.second > b.second;} });

        // Retrieve the top K elements (e.g., top 3 elements)

        std::vector<std::pair<int, int>> topK(vec.begin(), vec.begin() + k);

        // Print the top K elements
        for (const auto &pair : topK)
        {
            // std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
            m.push_back(pair.first);
        }
        // cout<<endl;
        // for (int  i = 0; i < k; i++)
        // {
        //     cout<<m[i]<<" ";
        // }

        return m;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    cout << tc << endl;
    while (tc--)
    {
        int n;
        cin >> n;
        // cout << n << endl;
        vector<int> nums(n);
        for (auto &i : nums)
        {
            cin >> i;
            // cout << i << " ";
        }
        // cout << endl;
        int k;
        cin >> k;
        // cout << k << endl;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}