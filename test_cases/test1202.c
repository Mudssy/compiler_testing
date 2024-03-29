
#include <string.h>
#include <stdio.h>

int main(void) {
    char src[10] = "Testing";
    char dest[5];

    strncpy(dest, src, sizeof(dest));
    
    if (strcmp(dest, "Test") == 0) 
        printf("Copy successful\n");
    else
        printf("Copy unsuccessful\n");

    return 0;
}
