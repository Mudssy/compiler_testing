
#include <stdio.h>

typedef void (*function_ptr)(void);

// Constructors
void constructor1() { printf("Constructor 1\n"); }
void constructor2() { printf("Constructor 2\n"); }

// Destructors
void destructor1() { printf("Destructor 1\n"); }
void destructor2() { printf("Destructor 2\n"); }

int main() {
    function_ptr constructors[] = { constructor1, constructor2 };
    function_ptr destructors[] = { destructor1, destructor2 };
    
    int numConstructors = sizeof(constructors) / sizeof(function_ptr);
    int numDestructors = sizeof(destructors) / sizeof(function_ptr);

    // Call constructors
    for (int i = 0; i < numConstructors; ++i) {
        (*constructors[i])();
    }
    
    printf("\n");

    // Call destructors in reverse order
    for (int i = numDestructors - 1; i >= 0; --i) {
        (*destructors[i])();
    }

    return 0;
}
