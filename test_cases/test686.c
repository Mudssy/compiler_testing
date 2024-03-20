
#include <stdio.h>

// Declare template function
template <typename T>
void print_value(T value) {
    printf("%d\n", value);
}

int main() {
    // Use template instantiation and rewriting feature
    int x = 5;
    print_value<int>(x);
    
    return 0;
}
