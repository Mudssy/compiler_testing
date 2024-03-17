
#include <stdio.h>

typedef struct {
    int x;
    char y[10];
} myStruct;

union myUnion {
    int a;
    float b;
};

enum myEnum {
    VALUE_A,
    VALUE_B,
    VALUE_C
};

int main() {
    // Test pointers, arrays, structs, unions, and enums
    int arr[3] = {1, 2, 3};
    myStruct s;
    s.x = 42;
    strcpy(s.y, "Hello");
    
    union myUnion u;
    u.a = 7;

    enum myEnum e = VALUE_B;

    printf("Pointer to int: %p\n", arr);
    printf("Array: %d, %d, %d\n", arr[0], arr[1], arr[2]);
    printf("Struct x: %d, y: %s\n", s.x, s.y);
    printf("Union int a: %d, float b: %f\n", u.a, u.b);
    printf("Enum value: %d\n", e);
    
    return 0;
}Here is the C code that meets your requirements. It tests pointers, arrays, structs, unions, and enums.

