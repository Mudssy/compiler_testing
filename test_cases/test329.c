
#include <stdio.h>

void oldApiFunction() {
    printf("Old API returned successfully\n");
}

void newApiFunction() {
    printf("New API did not return correctly\n");
}

int main() {
    int result = -1; // Assume an error has occurred.
    
    oldApiFunction();

    if (result == 0) {
        printf("Old API returned successfully\n");
    } else {
        newApiFunction();
    }

    return 0;
}
