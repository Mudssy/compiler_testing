
#include <stdio.h>
#include <stdlib.h>
#include <vector>

void printVector(const std::vector<int>& v) {
    for (auto i : v) {
        printf("%d ", i);
    }
}

std::vector<int> shuffleWithMixedTypes(const std::vector<int>& v, const int mask[4]) {
    std::vector<int> result;
    for (size_t i = 0; i < v.size(); ++i) {
        if (mask[i % 4] < 32) { // This will shuffle the bits of the integer values only.
            int bit = (v[i] >> mask[i % 4]) & 1;
            result.push_back(bit);
        } else { // This will just return the original value.
            result.push_back(v[i]);
        }
    }
    return result;
}

int main() {
    std::vector<int> v = {1, 2, 3, 4};
    int mask[] = {1, 2, 3, 4}; // This is your mixed type array. Replace with actual values.
    printf("Input vector:\n");
    printVector(v);
    std::vector<int> result = shuffleWithMixedTypes(v, mask);
    printf("\nShuffled vector:\n");
    printVector(result);
    return 0;
}
