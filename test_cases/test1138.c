
#include <stdio.h>

int flag = 0;  // Moved declaration here from within main() function to make it global

void check_label(void);   // Function prototype

int main() {
    check_label();        // Removing void keyword before function call

    if (flag == 1)
        printf("Success\n");
    else
        printf("Failed\n");
    
    return 0;
}

void check_label() {      // Function definition with correct syntax
start:                    // This is a label declaration.
    flag = 1;             // Assigning the value of flag to 1 when start label is encountered
}
