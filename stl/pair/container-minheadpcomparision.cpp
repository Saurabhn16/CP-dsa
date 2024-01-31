#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> min_heap;
    
    min_heap.push(std::make_pair(3, 4));
    min_heap.push(std::make_pair(1, 2));
    min_heap.push(std::make_pair(5, 6));
    min_heap.push(std::make_pair(2, 1));

    while (!min_heap.empty()) {
        std::pair<int, int> current_pair = min_heap.top();
        std::cout << "First: " << current_pair.first << ", Second: " << current_pair.second << std::endl;
        min_heap.pop();
    }

    return 0;
}
