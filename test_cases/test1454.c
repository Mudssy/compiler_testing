
#include <stdio.h>

int main() {
    printf("The line after this will be spliced.\n");
    
    // Line Splicing Example
    #define DECLARE_VAR(type, name) type##name
    int DECLARE_VAR(x, 1);
    x1 = 5;
    printf("%d\n", x1);

    return 0;
}
