
#include <stdio.h>

// Define an API function pointer type and a global variable for it
typedef void (*APIFunction)();
APIFunction api_function = NULL;

void unavailable_api() {
    printf("This API is not available on this platform.\n");
}

int main() {
    // Set the function pointer to point to the API function if it's available, else to the unavailable_api
    api_function = &unavailable_api;

    // Call the function through the function pointer
    (*api_function)();

    return 0;
}
