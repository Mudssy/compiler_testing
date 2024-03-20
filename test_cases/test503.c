
#include <stdlib.h>
#include <string.h>

int __attribute__((no_sanitize("address"))) functionWithNoSanitizeAddress() {
    int* ptr = (int*)malloc(sizeof(int));
    if (ptr == NULL)
        return -1;
        
    *ptr = 5; // This will trigger a segmentation fault but since we are using no_sanitize("address"), it will not be detected by the compiler.
    
    free(ptr); 
    return 0;
}

int main() {
    int result = functionWithNoSanitizeAddress();
    if (result == 0) {
        printf("The function worked without an error.\n");
    } else {
        printf("There was a problem with the function execution.\n");
    }
    
    return 0;
}
