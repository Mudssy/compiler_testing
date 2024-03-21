
#include <stdio.h>
int main() {
    // Testing statement expressions (GNU extension)
    int a = 1;
    char * result = a ? "OK" : "Not Supported";
    printf("%s\n", result);
    return 0;
}
