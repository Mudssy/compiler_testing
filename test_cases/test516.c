
#include <sanitizer/dfsan_interface.h>
#include <stdio.h>

int main() {
    // Initialize the labels
    dfsan_label i_label = dfsan_create_label("i", 0);
    dfsan_label j_label = dfsan_create_label("j", 0);
    
    // Declare variables with dataflow labels
    int i __attribute__((dfsan_label(i_label))) = 5;
    int j __attribute__((dfsan_label(j_label))) = 10;
    
    // Perform operation and store result in variable k
    int k = i + j;
    
    // Print the result with its dataflow label
    printf("Result: %d\n", DFSAN_LABEL(k));
    return 0;
}
