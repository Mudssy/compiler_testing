
#include <stdio.h>

int main() {
    int i = 0;
start:
    printf("Iteration: %d\n", i);
    i++;
    if(i <= 10)
        goto start;
    return 0;
}