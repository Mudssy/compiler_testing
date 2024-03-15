
#include <stdio.h>

int main() {
    #line 42 "custom_file.c"
    printf("This line number is changed to 42: %d\n", __LINE__);
    
    return 0;
}
