
#include <string.h>
#include <stdio.h>

int main() {
    char str1[] = "hello world"; // String to search in
    char str2[] = "elowrd";      // Substring to search for
    size_t len;                  // Store the returned length
    
    len = strspn(str1, str2);

    if (len == sizeof(str2) - 1 && len != sizeof(str1)) {
        printf("Passed\n");
    } else {
        printf("Failed\n");
    }
    
    return 0;
}
