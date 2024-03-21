
#include <stdio.h>

// Define a struct with a long name
typedef struct SomeVeryLongAndVerboseStructName {
    int value;
} MyStruct;

int main(void) {
    // Create an instance of the struct
    MyStruct s = { .value = 42 };
    
    printf("Value: %d\n", s.value);  // Print the value
    
    return 0;
}
