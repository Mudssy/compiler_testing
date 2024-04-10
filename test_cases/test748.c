
#include <stdio.h>
#include <assert.h>

// The function declaration
int* stubFunction(void) __attribute__((returns_nonnull));

// Implementation of stub with return null (for testing)
/* 
int* stubFunction(void){
    int *val = NULL;
    return val;
}*/

// Implementation of stub with return non-null (for normal operation)
int* stubFunction(void){
    static int val = 5; // Static variables are initialized to zero when the function is first called and retain their value on subsequent calls.
    return &val;
}

int main() {
    assert(stubFunction() != NULL); // Ensure that stubFunction returns non-null
    printf("Stub Function returned non null\n");
    return 0;
}
