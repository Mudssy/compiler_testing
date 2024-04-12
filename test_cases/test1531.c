
#include <stdio.h>

int main() {
    // Testing volatile qualifier
    int volatile_var = 10;
    printf("Volatile variable before modification = %d\n", volatile_var);
    volatile_var += 5;
    printf("Volatile variable after modification = %d\n", volatile_var);
    
    // Testing const qualifier
    const int const_var = 20;
    printf("Constant variable before modification = %d\n", const_var);
    // Uncomment the next line to see an error about modifying a constant variable
    // const_var += 5; 

    return 0;
}
