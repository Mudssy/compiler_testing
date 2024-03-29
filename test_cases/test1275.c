
#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL); // Get current calendar time 
    struct tm *gmt = gmtime(&t); // Convert to UTC time 
    
    if (gmt == NULL) {
        printf("Failed to get GMT time.\n");
        return -1;
    }

    char buf[26]; // Max length of string representation is 26 bytes
    strftime(buf, sizeof(buf), "%a, %d %b %Y %T %z", gmt); // Convert to string format
    
    printf("%s\n", buf); // Print the resultant string

    return 0;
}
