
#include <stdio.h>

#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int main() {
    int a = 5;
    int b = 10;
    printf("The maximum value is: %d\n", MAX(a, b));
    return 0;
}
