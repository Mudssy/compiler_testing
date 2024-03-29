
#include <stdio.h>
#include <time.h>

int main(void) {
    time_t t = time(NULL);  // Get current time in seconds since epoch
    struct tm *tm = localtime(&t);  // Convert to tm structure
    
    printf("Local time: %s", asctime(tm));  // Print the date and time

    return 0;
}
