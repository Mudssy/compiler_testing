
#include <stdio.h>

__attribute__((always_inline)) static inline void print_output(const char* output) {
    printf("%s\n", output);
}

int main() {
    const char* output = "Function Attributes feature test for the C programming language.";
    print_output(output);
    return 0;
}
