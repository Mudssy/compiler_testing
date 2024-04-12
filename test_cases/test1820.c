
#include <stdio.h>

int* get_pointer() {
    int x = 10;  // Start Scope of 'x'
    
    if (x == 10) {
        return &x;  // End Scope of 'x' but still in scope for the returned pointer
    } else {
        return NULL;  // No Pointer to return
    }
}

int main() {
    int* ptr = get_pointer();
    
    if (ptr != NULL) {
        printf("%d\n", *ptr);  // Should print '10'
    } else {
         printf("NULL Pointer Returned\n");
    }

    return 0;  // Ends the main function, ending scope for all variables
}
