
#include <stdio.h>

// The lambda function to print a greeting
void (*greet)(const char *) = (void(*)(const char *))(void(*)());

int main() {
    // Assign the lambda function to print "Hello, World!"
    greet = (void(*)(const char *)) ^ void(char *name) { printf("Hello, %s!\n", name); };
    
    // Call the lambda function with our name as an argument
    greet("World");
    
    return 0;
}
