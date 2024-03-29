
#include <stdio.h>
#include <time.h>

int main() {
    time_t rawtime;
    struct tm * timeinfo;
    
    // Get the current time
    time(&rawtime);
    
    // Convert it to local time representation
    timeinfo = localtime(&rawtime);
    
    printf("Current local time and date: %s", asctime(timeinfo));
    
    return 0;
}
