
#include <stdio.h>

typedef void (*FunctionPointer)();

void function1() {
    printf("Function 1 executed.\n");
}

void function2() {
    printf("Function 2 executed.\n");
}

int main() {
    FunctionPointer funcArray[2] = {function1, function2};

    for (int i = 0; i < 2; i++) {
        funcArray[i]();
    }

    return 0;
}
