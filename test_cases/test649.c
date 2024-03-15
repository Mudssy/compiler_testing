
#include <stdio.h>
#include <time.h>

int main() {
    time_t rawtime;
    struct tm *timeinfo;
    char buffer[80];

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer, sizeof(buffer), "Current date and time: %Y-%m-%d %H:%M:%S", timeinfo);
    puts(buffer);

    return 0;
}
