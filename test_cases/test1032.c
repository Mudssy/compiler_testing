
#include <stdio.h>

int main() {
    int result = 0;
    
    // Using brace wrapping for namespaces feature
    namespace
    {
        int someVariable = 42;
    }
    
    printf("Output: %d\n", someVariable);
    
    return result;
}
