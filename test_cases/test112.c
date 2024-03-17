
#include <stdio.h>

void outerFunction() {
    void innerFunction(int num) {
        printf("This is the number %d from inner function\n", num);
    }

    for (int i = 0; i < 5; i++){
        innerFunction(i);
    }
}

int main() {
    outerFunction();
    return 0;
}
