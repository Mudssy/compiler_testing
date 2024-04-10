
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>  // necessary for the exit(0) call

int main(void) {
    int x = 10;
    
    assert(x == 5);  // This will fail and program should stop here
    
    printf("This line shouldn't be printed\n");
    return 0;
}
