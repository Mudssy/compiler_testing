
#include <stdlib.h>
#include <string.h>

int main() {
    char *data = (char *)malloc(10);
    strcpy(data, "Hello");
    
    if (data[6] == '\0') {
        printf("Buffer Overflow detected! Aborting.\n");
        exit(-1);
    } else {
        free(data);
    }
    
    return 0;
}
