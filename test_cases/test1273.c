
#include <stdio.h>
#include <time.h>

int main() {
    struct tm *local;
    time_t t = time(NULL);
    
    // localtime converts a time_t value to calendar time and returns a pointer to a tm structure with its members filled with the corresponding values
    local = localtime(&t); 

    printf("Current date and time is: %s\n", asctime(local));  // print the current date and time in string format.

    return 0;
}
