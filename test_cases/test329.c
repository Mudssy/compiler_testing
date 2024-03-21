
#include <stdio.h>
#define old_api 0 // We need to define these as dummy values since they are not actual API calls
#define new_api 1

// This function is hypothetical, and does nothing but return some value
int __attribute__((deprecated)) renamed_api(void) {
    return old_api; // this will result in deprecation warning while compiling
}

int renamed_api(void); // without this declaration, compiler will not find definition of function for API rename.

// This is the new version of the api
int renamed_api(void) {
    return new_api;
}

int main() {
    if (renamed_api() == old_api) {
        printf("Old API returned successfully\n");
    } else {
        printf("New API did not return correctly\n");
    }

    return 0;
}
