
#include <stdio.h>

int main() {
    #define STRINGIZE(x) #x
    #define TO_STRING(x) STRINGIZE(x)
    printf("Line: " TO_STRING(__LINE__) ", Column: " TO_STRING(__COLUMN__) "\n");
    return 0;
}
