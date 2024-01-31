#include <iostream>

int countConsecutiveOnes(int arr[], int size) {
    int count = 0;
    int maxCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == 1) {
            count++;
            if (count > maxCount) {
                maxCount = count;
            }
        } else {
            count = 0;
        }
    }

    return maxCount;
}

int main() {
    int arr[] = {1, 1, 0, 1, 1, 1, 0, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxConsecutiveOnes = countConsecutiveOnes(arr, size);

    std::cout << "Maximum consecutive ones: " << maxConsecutiveOnes << std::endl;

    return 0;
}
