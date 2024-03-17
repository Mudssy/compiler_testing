
#include <stdio.h>

template<typename... Args>
void print(Args... args) {
    // Prints out each argument using a fold expression
    ((printf("%d\n", args)), ...);
}

int main() {
    print(1, 2, 3, 4, 5);
    return 0;
}
