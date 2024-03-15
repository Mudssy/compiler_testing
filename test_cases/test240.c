
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("FILE: __FILE__\n");
    printf("LINE: %d\n", __LINE__);
    printf("DATE: \"__DATE__\"\n");
    printf("TIME: \"__TIME__\"\n");
    printf("TIMESTAMP: %ld\n", (long)time(NULL));
    return 0;
}
