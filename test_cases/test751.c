
#include <stdio.h>

__attribute__((constructor)) void init() {
    printf("Init function stub called\n");
}

int main(void) {
    printf("Hello World!\n");
    return 0;
}
