
#include <stdio.h>

enum {RED, BLUE} color; // enum variable declaration

int main() {
    if(color == RED) {
        printf("Enumeration constant RED is supported\n");
    } else if(color == BLUE){
        printf("Enumeration constant BLUE is supported\n");
    } else {
        printf("Enumeration constants are not supported or there's an error with the color enum\n");
    }
    return 0; // making sure this test case does not run forever
}
