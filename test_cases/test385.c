
#include <stdio.h>

void func(void) {
    static int x = 0; // Static variable that will retain its value across function calls
    ++x;
    printf("Value of X is %d\n", x);
}

int main() {
    for (int i=0;i<5;i++)
        func();
    return 0;
}
