
#include <stdio.h>

void printStaticVar() {
    static int counter = 0;
    printf("Counter value: %d\n", ++counter);
}

int main() {
    for (int i = 0; i < 5; i++) {
        printStaticVar();
    }
    return 0;
}
