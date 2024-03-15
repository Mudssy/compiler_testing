
#include <stdio.h>

int main() {
    double result = __builtin_huge_val();
    printf("The value of __builtin_huge_val(): %f\n", result);
    return 0;
}
