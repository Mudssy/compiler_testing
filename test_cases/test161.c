
#include <stdio.h>

typedef struct {
    int value;
} MyStruct;

MyStruct add(MyStruct a, MyStruct b) {
    return (MyStruct){a.value + b.value};
}

void print(MyStruct s) {
    printf("%d\n", s.value);
}

int main() {
    MyStruct x = {10};
    MyStruct y = {20};
    
    MyStruct z = add(x, y);
    print(z);  // Expected output: 30
    
    return 0;
}
