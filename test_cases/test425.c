
#include <stdio.h>
#include <stdalign.h>

int main() {
    alignas(16) char str[50];
    
    snprintf(str, sizeof(str), "Address of str: %p\n", (void *) &str);
    printf("%s", str);

    return 0;
}
