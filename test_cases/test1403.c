
#include <stdio.h>

void executedTest() {
    printf("This function is executed\n"); 
}

void nonExecutedTest() {
    printf("This function is not executed\n");
}

int main() {
    __builtin_codeview_function("executedTest") // Mark this function as being 'executed' for code coverage analysis.
    executedTest();  // This function should be considered 'executed' for code coverage.
    
    nonExecutedTest();  // This function is not marked for code coverage, so it shouldn't show up in the report.
    
    return 0;
}
