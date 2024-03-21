pp
#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
void print_vec(const std::vector<T>& vec) {
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> ints = {5, 10, 15};
    print_vec(ints);

    std::vector<double> doubles = {2.71828, 3.14159, 1.61803};
    print_vec(doubles);

    return 0;
}
