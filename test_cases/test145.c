
#include <stdio.h>

void print_ref_info() {
    printf("File Name: %s\n", __FILE__);
    printf("Line Number: %d\n", __LINE__);
    printf("Function Name: %s\n", __func__);
}

int main() {
    print_ref_info();
    return 0;
}
