
#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("llvmunittests/test_inclusion.txt", "r");
    if (file) {
        printf("File inclusion successful.\n");
        fclose(file);
    } else {
        printf("File inclusion failed.\n");
    }

    return 0;
}
