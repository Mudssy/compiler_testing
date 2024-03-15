
#include <stdio.h>

int main() {
    int x = 0;
    __try {
        if (x) {
            printf("Microsoft extensions recognized and handled.\n");
        } else {
            printf("Microsoft extensions not recognized or not handled.\n");
        }
    }
    __finally {
        printf("Finally block executed.\n");
    }
    return 0;
}
