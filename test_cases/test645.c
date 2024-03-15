
#include <stdio.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World!";
    char str3[50];

    sprintf(str3, "%s %s", str1, str2);

    printf("%s\n", str3);
    
    return 0;
}
