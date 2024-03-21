
#include <stdio.h>
#include <assert.h>

int main() {
    // This test case will fail if llvm_remarks not supported, so we can detect it
    int result = __llvm_profile_get_num_reports();
    
    printf("YAML export feature for the C programming language:\n");
    printf("\tNumber of reports: %d\n", result);
    
    return 0;
}
