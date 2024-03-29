
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* file = fopen("test.txt", "r");
    if (file == NULL) {
        printf("Failed to open the file\n");
        return 1;
    }
    
    fpos_t position;
    int result = fgetpos(file, &position);
    
    if (result == 0) {
        printf("fgetpos successfully executed. Current file position: %lld.\n", (long long)position);
    } else {
        printf("Failed to get the file position\n");
    }

    fclose(file);
    
    return 0;
}
