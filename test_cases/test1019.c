
#include <stdio.h>

typedef struct {
    int a;
    int b;
} MyStruct;

MyStruct myFunc(void) {
    MyStruct obj = {1, 2};
    return obj;
}

int main() {
    MyStruct obj2 = myFunc();
    printf("Values of obj2: a=%d, b=%d\n", obj2.a, obj2.b);
    return 0;
}
