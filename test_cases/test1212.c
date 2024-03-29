
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello world";
    char str2[] = "wor";
    size_t n;
    
    n = strcspn(str1, str2);
    
    printf("First matched character is at %zu\n", n);
    
    return 0;
}
