
#include <stdio.h>

typedef struct {
    int x;
} MyStruct;

MyStruct init_method(int val) {
    MyStruct obj;
    obj.x = val * 2;
    return obj;
}

void print_struct(MyStruct s) {
    printf("The value of x is: %d\n", s.x);
}

int main() {
    MyStruct obj = init_method(10);
    print_struct(obj);
    return 0;
}
