
#include <stdio.h>

int main() {
    char buffer[100];
    // This is a special element used in output functions like printf
    char* format_string = "%s"; 
    
    sprintf(buffer, format_string, "Hello World");
    printf("%s", buffer);
    
    return 0;
}
