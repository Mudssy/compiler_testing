
#include <stdio.h>

int main() {
    printf("Testing Labels...\n");
    
    // Using while loop for initialization of labels in C
    start_loop: 
        printf("Printed from label.\n");
        goto start_loop;

    return 0;
}
