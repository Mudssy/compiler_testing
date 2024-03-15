
#include <stdio.h>

int main() {
    const char *ptr = "This string will be prefetched";
    __builtin_prefetch(ptr, 0, 3);
  
    printf("Output after prefetch operation\n");
    return 0;
}
