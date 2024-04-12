
#include <stdlib.h>

int main() {
    int* ptr = (int*)malloc(sizeof(int)); // Allocate some memory
    
    if(ptr == NULL) {
        return -1;
    }

    *ptr = 5;  // Assign a value to the allocated memory

    return 0; // End of program, no cleanup, leading to potential memory leak
}
