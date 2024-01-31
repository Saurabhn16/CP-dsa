#include <iostream>
#include <algorithm>
#include <vector>

bool compareByKey(const std::pair<int, char>& lhs, const std::pair<int, char>& rhs) {
    return lhs.first < rhs.first;
}

int main() {
    std::vector<std::pair<int, char>> my_vector = {{3, 'C'}, {1, 'A'}, {2, 'B'}};

    std::sort(my_vector.begin(), my_vector.end(), compareByKey);

    for (const auto& pair : my_vector) {
        std::cout << pair.first << " " << pair.second << std::endl;
    }

    return 0;
}
