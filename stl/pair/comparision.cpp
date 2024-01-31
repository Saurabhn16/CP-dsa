#include <iostream>
#include <utility>

int main() {
    std::pair<int, int> pair1(1, 2);
    std::pair<int, int> pair2(3, 4);

    bool result = (pair1.first > pair2.first);

    std::cout << "Result: " << std::boolalpha << result << std::endl;

    return 0;
}
