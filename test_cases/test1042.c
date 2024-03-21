
#include <stdio.h>

int main(void) {
    int arr[3] = {1, 2, 3, }; // Trailing comma is supported in C99

    for (size_t i = 0; i < sizeof(arr)/sizeof(*arr); ++i) {
        printf("%d\n", arr[i]);
    }
    
    return 0;  // Ensure the program always returns.
}
