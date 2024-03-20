
#include <stdio.h>
#include <assert.h>

// Define a dummy attribute 'nonstring' and a function f with this attribute
#define nonstring __attribute__((annotate("nonstring")))
void nonstring f() {}

int main(void) {
    // Get the attributes of the function `f`
    const char *attr = __builtin_annotation(f, "nonstring");
    
    if (attr == NULL) {
        printf("Function 'f' doesn't have the 'nonstring' attribute\n");
    } else {
        printf("Function 'f' has the 'nonstring' attribute with value '%s'\n", attr);
        
        // Verify that the attribute has a specific value
        assert(strcmp(attr, "<value>") == 0);
    }
    
    return 0;
}
