
#include <stdio.h>

int main() {
    // Define __builtin_cpu_is is used as a macro for checking CPU features 
    if(__builtin_cpu_supports("avx")){
        printf("The processor supports AVX.\n");
    } else {
        printf("The processor does not support AVX.\n");
    }
    
    // You can test other features as well, for example:
    if(__builtin_cpu_supports("sse4.2")){
        printf("The processor supports SSE4.2.\n");
    } else {
        printf("The processor does not support SSE4.2.\n");
    }
    
    // Check for architecture:
    if(__builtin_cpu_is("x86_64")){
        printf("Target is x86-64\n");
    } else {
        printf("Not running on an x86-64 architecture.\n");
    }
    
    return 0;
}
