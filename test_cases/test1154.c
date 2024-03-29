
#include <stdio.h>

int main() {
    #line 10 "test.c" // Change line number and filename
    printf("Current line number: %d\n", __LINE__);
    printf("Current file name: %s\n", __FILE__);
}
