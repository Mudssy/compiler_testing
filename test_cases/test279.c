
#include <stdio.h>

int globalVar __attribute__ ((section ("clanglibDriver")));

void printAddress() {
    printf("globalVar address: %p\n", &globalVar);
}

int main() {
    printAddress();
    return 0;
}
