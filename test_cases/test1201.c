
#include <stdio.h>
#include <string.h>  // for strcpy function

int main() {
    char original[100] = "Hello, World!";
    char target[20];
    
    strcpy(target, original);  // copy string from original to target

    printf("%s\n", target);  // print the copied string
    
    return 0;  // return success code
}
