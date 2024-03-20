
#include <stdio.h>

int main() {
    printf("Before include directive\n");
    
    #include "non_existent_file.txt" // This should cause an error at compile-time

    printf("After include directive\n"); // This line will not be executed, so it won't print anything

    return 0;
}
