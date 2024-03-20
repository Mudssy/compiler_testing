
#include <stdlib.h>
#include <stdio.h>
#include "clanglibAPINotes/generics.h"

typedef struct {
    int x;
} my_generic_type;

int main() {
    // Create an instance of the generic type and populate it with data
    my_generic_type gt = {10};
    
    // Use a function from clanglibAPINotes/generics.h that takes this type as input
    void* result = some_function(gt);
    
    if (result == NULL) {
        printf("Result is null\n");
        return 1;  // Return an error code
    } else {
        printf("Success, result is not null\n");
    }

    free(result);  
    return 0;  // Return success code
}
