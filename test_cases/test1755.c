
#include <stdio.h>

void print(__auto_type x) {
    printf("Value: %d\n", x);
}

int main() {
    __auto_type i = 10;
    print(i);
    return 0;
}
