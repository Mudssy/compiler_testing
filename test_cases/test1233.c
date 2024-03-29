
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(10 * sizeof(int)); // allocate memory for 10 integers
    if (p == NULL) {
        printf("Memory allocation failed\n");
        return -1; // indicates error
    }
    
    p[0] = 5; // set the first value to 5
    
    int *new_p = realloc(p, 20 * sizeof(int)); // reallocate memory for 20 integers
    if (new_p == NULL) {
        printf("Memory allocation failed\n");
        free(p); // need to free the original block of memory
        return -1; // indicates error
    }
    
    new_p[10] = 7; // set the eleventh value to 7 in the resized array
    
    printf("The tenth element is %d\n", p[9]); // should print "5"
    printf("The eleventh element is %d\n", new_p[10]); // should print "7"
    
    free(new_p); // always remember to free the memory when done
    
    return 0;
}
