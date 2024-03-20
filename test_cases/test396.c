
#include<stdio.h>

int main() {
    printf("Testing Labels...\n");
    here: // Label definition
    printf("Printed from label.\n");
    goto here; // Jump to label 'here'

    return 0;
}
