
#include <time.h>
#include <stdio.h>

int main() {
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    char buf[64];
    strftime(buf, sizeof(buf), "%c", tm);
    printf("Current date and time: %s\n", buf);
    return 0;
}
