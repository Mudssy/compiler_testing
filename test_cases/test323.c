
#include <stdio.h>

void __attribute__((constructor)) my_init(void) { printf("Initializing\n"); }
void __attribute__((destructor))  my_fini(void) { printf("Finalizing\n"); }

int main()
{
    printf("Main function\n");
    return 0;
}
