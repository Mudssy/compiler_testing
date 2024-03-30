
#include <stdio.h>

void __attribute__((noinline)) foo(int x) {
    printf("%d\n", x);
}

// Function to test writing sample-based profile data to files feature
int main() {
    int i;
    for (i = 0; i < 100; i++) {
        foo(i);
    }
    
    // Writing the sample-based profile data to a file
    FILE *f = fopen("profile.profraw", "wb");
    if (!f) {
        printf("Failed to open profile output file\n");
        return 1;
    }

    __llvm_profile_write_file(f); // This function should write the profile data to a file, but it's not working
    
    fclose(f);
    return 0;
}
