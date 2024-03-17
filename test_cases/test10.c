
#include <stdio.h>

inline int add(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int result = add(40, 2);
    printf("The addition of 40 and 2 is: %d\n", result);

    return 0;
}
