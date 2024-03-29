
#include <stdio.h>
#include <time.h>

int main() {
    struct tm mytm;
    time_t rawtime;
    
    /* Set time to "now" */
    time(&rawtime);

    /* Fill the 'mytm' structure with the broken-down time */
    if (localtime_r(&rawtime, &mytm) == NULL) {
        printf("Error: Could not convert time.");
        return 1;
    }
    
    /* Print the initial time */
    printf("Initial time: %s", asctime(&mytm));
    
    /* Change a field in 'mytm' structure (e.g., month) */
    mytm.tm_mon = 5;  // Set to June (0-11)

    /* Convert the broken-down time back into a `time_t` object */
    if ((rawtime = mktime(&mytm)) == -1) {
        printf("Error: Could not convert time.");
        return 1;
    }
    
    /* Print the new time after conversion */
    localtime_r(&rawtime, &mytm); // Get updated broken-down time.
    printf("New time: %s", asctime(&mytm));

    return 0;
}
