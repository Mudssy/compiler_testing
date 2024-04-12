
#include <stdio.h>

void foo(int num) {
    printf("Inside foo with num=%d\n", num);
}

void bar(int num) {
    printf("Inside bar with num=%d\n", num);
}

int main() {
    void (*p[2])(int);  // Array of function pointers.
    
    p[0] = foo;         // Assign address of foo to first element in array.
    p[1] = bar;         // Assign address of bar to second element in array.
    
    int i;              // Loop variable.
    
    for(i = 0; i < 2; i++) {  // Loop through the array of function pointers.
        p[i](5);               // Call each function via its pointer with argument 5.
    }

    return 0;
}
