
#include <stdio.h>

// Define an enumeration
typedef enum {
    VALUE1,
    VALUE2,
    VALUE3
} my_enum;

int main() {
    // Declare and initialize two variables of type my_enum
    my_enum var1 = VALUE1;
    my_enum var2 = VALUE2;
    
    // Compare the values and print out a specific output based on that comparison
    if (var1 < var2) {
        printf("VALUE1 is less than VALUE2\n");
    } else if(var1 > var2) {
        printf("VALUE1 is greater than VALUE2\n");
    } else {
        printf("VALUE1 and VALUE2 are equal\n");
    }
    
    return 0;
}
