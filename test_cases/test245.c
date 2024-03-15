
#include <stdio.h>

#define COUNTER(x) #x

int main() {
    printf("COUNTER macro output: %s\n", COUNTER(COUNTER));
    return 0;
}
