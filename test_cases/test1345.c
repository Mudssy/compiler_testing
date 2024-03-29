
#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    
    printf("Current date and time: %s\n", asctime(tm));

    return 0;
}
