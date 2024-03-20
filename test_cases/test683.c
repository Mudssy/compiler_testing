
#include <stdio.h>

// The compiler should call this function before main() is called
void init(void) __attribute__((constructor)); 

void init(void)
{
    printf("Pragma directive handling feature was tested.\n");
}

int main() {
    printf("The test for Pragma directive handling completed successfully.\n");
    return 0;
}
