
#ifdef __clang__
    #include <stdio.h>
    
    extern void print_message(void); // externally defined function
    
    int main() {
        printf("Running test case for 'extern \"C\"' feature...\n");
        print_message();  // Call to the external function
        return 0;
    }
#else
    #error This test requires clang compiler.
#endif
