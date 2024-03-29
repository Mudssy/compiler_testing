
#include <stdio.h>
#include <time.h>

int main(void) {
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);

    printf("Current date and time is: %s\n", asctime(tm));

    return 0;
}
