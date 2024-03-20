
#include <stdio.h>

typedef struct {
    int x;
    char y[10];
} MyStruct;

void printMyStruct(MyStruct s) {
    printf("x = %d, y = %s\n", s.x, s.y);
}

int main() {
    MyStruct myStruct = {24, "Hello"};
    printMyStruct(myStruct);

    return 0;
}
