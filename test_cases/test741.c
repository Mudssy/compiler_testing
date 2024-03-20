
#include <stdio.h>

// Deprecated function
void oldFunction() __attribute__((deprecated));

void oldFunction(){
    printf("Deprecated Function\n");
}

int main(void) {
    oldFunction();  // Here compiler should issue a warning message
    return 0;
}
