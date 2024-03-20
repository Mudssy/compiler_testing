
#include <stdio.h>
#include <time.h>

int main() {
    // Get the current time in seconds since the Epoch (00:00:00 UTC, January 1, 1970)
    time_t now = time(NULL);
    
    if (now == -1) {
        printf("Failed to get the current time\n");
        return 1;
    }
    
    // Convert the time value to a readable format and print it out. The strftime function is used for this.
    struct tm* localTime = localtime(&now);
    
    if (localTime == NULL) {
        printf("Failed to convert the current time\n");
        return 1;
    }
    
    char buffer[80];
    strftime(buffer, sizeof(buffer), "%c", localTime);
    printf("Current date and time is: %s\n", buffer);
    
    return 0;
}
