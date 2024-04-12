
#include <stdio.h>

int main() {
    int num = 1;
    
    if (*(char *)&num == 1) {
        printf("System is little endian\n");
    } else {
        printf("System is big endian\n");
    }

    return 0;
}
