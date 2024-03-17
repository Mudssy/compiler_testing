
#include <stdio.h>

template<typename T>
T max(T a, T b) { return (a > b) ? a : b; }

int main() {
    printf("Max value is %d\n", max<int>(3, 7)); // This will print "Max value is 7"
}
