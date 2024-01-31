#include <bits/stdc++.h>
 using namespace std;
#define int long long 
signed main() {
multimap<int, std::string> myMap;
// Populate myMap
myMap[1] = "Alice";
myMap[2] = "Bob";
myMap[3] = "Charlie";
myMap[4] = "David";
myMap[5] = "Alice";
myMap[6] = "Bob";

// Use equal_range() to find elements with key equivalent to 2
auto range = myMap.equal_range(2);

// Iterate over the range using iterators
for (auto it = range.first; it != range.second; ++it) {
    std::cout << it->first << ": " << it->second << std::endl;
}

return 0;
}