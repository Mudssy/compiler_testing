
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

typedef int (*operation)(int, int);

int main() {
    operation op = &add;
    
    if (op) {
        printf("%d\n", op(5, 7)); // This should print "12".
    } else {
        printf("Operation not supported.\n");
    }

    return 0;
}
