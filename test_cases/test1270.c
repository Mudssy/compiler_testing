
#include <stdio.h>
#include <time.h>

int main() {
    // Get current time
    time_t start = time(NULL);

    // Do some work (here just sleep for 2 seconds)
    sleep(2);

    // Calculate the difference
    double diff = difftime(time(NULL), start);
    
    printf("Time elapsed: %f\n", diff);

    return 0;
}
