
#include <stdio.h>

typedef struct {
    int x;
} ExampleStruct;

ExampleStruct create_example_struct(int value) {
    ExampleStruct obj;
    obj.x = value * 2;
    return obj;
}

int main() {
    ExampleStruct exampleObj = create_example_struct(5);
    printf("Factory method result: %d\n", exampleObj.x);
    return 0;
}
