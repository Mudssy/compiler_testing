
#include <stdio.h>

typedef struct {
    int value;
} MyStruct;

MyStruct operator+(MyStruct a, MyStruct b) {
    return (MyStruct){a.value + b.value};
}

int main() {
    MyStruct a = {10}, b = {20};
    MyStruct c = a + b;
    
    printf("Hello, World!"); // If this line is printed, then overloading works
    return 0;
}
