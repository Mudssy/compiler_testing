
#include <stdio.h>
#include <string.h>

int main() {
    char dest[256];
    char src1[] = "hello";
    char src2[] = "world";

    int result = strxfrm(dest, src1, sizeof(src1));
    
    if (result < sizeof(dest)) {
        printf("Transformation of '%s' into '%.*s'\n", src1, result, dest);
    } else {
        printf("Buffer too small for transforming '%s'\n", src1);
    }
    
    int compare = strcmp(src2, src1);
    if (compare < 0) {
        printf("%s is less than %s\n", src2, src1);
    } else if (compare > 0) {
        printf("%s is greater than %s\n", src2, src1);
    } else {
        printf("%s and %s are equal\n", src2, src1);
    }
    
    return 0;
}
