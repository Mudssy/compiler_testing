
#include <stdio.h>
#include <stdlib.h>
#include "/usr/include/testheader.h"

int main(void) {
    FILE *fp = fopen("/usr/include/testheader.h", "r");
    if (fp == NULL) {
        printf("Failed to open file\n");
        exit(EXIT_FAILURE);
    } else {
        printf("Successfully opened file %s\n", "/usr/include/testheader.h");
        fclose(fp);
    }
    
    return EXIT_SUCCESS;
}
