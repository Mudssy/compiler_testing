
#include <time.h>
#include <stdio.h>

int main() {
    time_t rawTime;
    struct tm *timeInfo;
    
    // Get current system time 
    time(&rawTime);  
    
    // Convert to local time 
    timeInfo = localtime(&rawTime); 
    
    // Print out the date and time 
    printf("Current local time is: %s\n", asctime(timeInfo));
     
    return 0;
}
