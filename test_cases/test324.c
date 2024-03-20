
#include <stdio.h>

typedef struct {
    int (*method)(int);
} MyStruct;

// Method for MyStruct instance
int MyMethod(int x) {
    return x * 2;
}

MyStruct NewInstance() {
    MyStruct instance = { .method = &MyMethod };
    return instance;
}

int main() {
    // Create new instance of MyStruct
    MyStruct my_instance = NewInstance();

    // Call method on MyStruct instance and print result
    printf("Result: %d\n", my_instance.method(5));  // Should print "Result: 10"

    return 0;
}
