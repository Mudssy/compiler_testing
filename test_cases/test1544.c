
#include <stdio.h>

__attribute__((visibility("default"))) 
void default_func() {
    printf("This function has the default visibility.\n");
}

__attribute__((visibility("hidden"))) 
void hidden_func() {
    printf("This function is only visible within its own object file.\n");
}

__attribute__((visibility("protected"))) 
void protected_func() {
    printf("This function is visible within the shared library where it's declared but not when you link with this library.\n");
}

int main() {
    default_func();
    hidden_func();
    protected_func();
    
    return 0; // Making sure that it returns.
}
