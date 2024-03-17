
#include <stdio.h>

int main() {
    #ifdef COMPILATION_MODE
        printf("Compiled\n");
    #elif LINKING_MODE
        printf("Linking\n");
    #elif PREPROCESSING_MODE
        printf("Preprocessing\n");
    #endif
}
