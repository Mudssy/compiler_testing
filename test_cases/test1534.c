
#include <stdio.h>

typedef struct myStruct; // Forward declaration of struct
void printMyStruct(struct myStruct *s); // Function prototype using incomplete type

int main() {
    printf("Testing incomplete type handling in C\n");
    
    struct myStruct { // Define the struct after its used
        int value;
    }; 

    struct myStruct s = { .value = 42 }; // Initialize a variable of this struct type
    printMyStruct(&s); // Use it

    return 0;
}

void printMyStruct(struct myStruct *s) { // Implement the function we forward declared
    printf("Value is: %d\n", s->value);
}
