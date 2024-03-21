
#include <stdio.h>

void handler(const char *RemarkType, const char *RemarkArgs, void *UserData) {
    printf("Remark: %s\n", RemarkArgs);
}

int main() {
    __builtin_debugtrap(handler, NULL);
    
    // Test cases go here
    int a = 10;
    int b = 20;
    int sum = a + b;  // This line generates a remark about the addition operation
    printf("Sum: %d\n", sum);
    
    return 0;
}
