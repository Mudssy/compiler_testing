
#include <stdio.h>
#include <time.h>

int main() {
    time_t now = time(NULL); // get current calendar time
    
    char* dt = ctime(&now); // convert it to string form
    
    printf("The local date and time is: %s", dt);

    return 0;
}
