
#include <stdio.h>

// Declare a struct with flexible array member
struct S {
    int i;
    char data[]; // This is the flexible array member
};

int main(void) {
    printf("Size of struct S: %lu\n", sizeof(struct S));
    
    // Allocate memory for a struct S with a flexibly-sized array
    size_t dataSize = 10;
    struct S *s = malloc(sizeof(*s) + dataSize);
    
    // Check the size of the allocated memory to make sure it's what we expect
    printf("Allocated size: %lu\n", sizeof(*s) + dataSize);
    
    s->i = 10;
    for (int i = 0; i < dataSize; ++i) {
        s->data[i] = 'a' + i; // Just some dummy values
    }
    
    printf("Value of i: %d\n", s->i);
    printf("Values in the array:\n");
    for (int i = 0; i < dataSize; ++i) {
        printf("%c ", s->data[i]);
    }
    
    free(s); // Don't forget to free allocated memory!
}
