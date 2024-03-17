
#include <stdio.h>

void print_from_external() __attribute__((weak));
int main() {
    if(print_from_external){
        printf("Function exists and is weak\n");
        print_from_external(); // Call the function to check if it works
    } else {
        printf("Function does not exist or isn't weak.\n");
    }

    return 0;;
}
