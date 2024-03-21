
#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 10; ++i) {
        printf("Outer loop iteration %d\n", i);
        for (int j = 0; j < 5; ++j) {
            printf("\tInner loop iteration %d\n", j);
        }
    }
    
    return 0;
}
