
#include <stdio.h>

#define COUNTER for(int i = 1; i <= 5; i++)

int main() {
    printf("Counting from 1 to 5:\n");

    COUNTER {
        printf("%d\n", i);
    }

    return 0;
}
