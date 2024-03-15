
#include <stdio.h>

int main() {
    int i = 0;

    while(i < 10) {
        printf("Iteration: %d\n", i);
        
        if (i == 5) {
            break;
        }

        i++;
    }

    return 0;
}
