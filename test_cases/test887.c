
#include <stdio.h>
#include <inttypes.h>

/* Function declarations */
void __llvm_profile_write_file(void);
uint64_t __llvm_profile_get_ctr(void *);

/* Array of function pointers to functions to be tested */
void (*testFunctions[])(void) = {func1, func2, func3, NULL};
char* testFunctionNames[] = {"func1", "func2", "func3"};

int main() {
    int i = 0;
    
    while(testFunctions[i] != NULL){
        /* Call the function */
        (*testFunctions[i])();
        
        /* Write profiling data to a file */
        __llvm_profile_write_file();
        
        uint64_t counter = __llvm_profile_get_ctr(testFunctions[i]);

        printf("Hotness information for function %s: %" PRIu64 "\n", testFunctionNames[i], counter);
        
        i++;
    }
    
    return 0;
}
