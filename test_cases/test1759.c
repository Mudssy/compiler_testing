
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    void *ptr;
    int ret = posix_memalign(&ptr, 512, sizeof(char));
    
    if (ret != 0 || ptr == NULL) {
        printf("Failed to allocate aligned memory.\n");
        return EXIT_FAILURE;
    } else {
        printf("Successfully allocated aligned memory.\n");
        free(ptr);
        return EXIT_SUCCESS;
    }
}
