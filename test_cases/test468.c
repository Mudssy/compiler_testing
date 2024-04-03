
#include <stdio.h>
#include <assert.h>

// Define a dummy attribute 'nonstring' as an empty macro
#define nonstring 

int main() {
    int x __attribute__((nonstring)) = 0;
    return 0;
}
